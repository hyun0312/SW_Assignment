// ��� ����
#include "BikeRent.h"
#include "BikeRentUI.h"
#include "BikeDB.h"
#include "Session.h"
#include "RentDB.h"
#include "BikeInfo.h"

/*
	�Լ� �̸� : BikeRent::BikeRent
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : BikeDB reference, RentDB reference, Session reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
BikeRent::BikeRent(BikeDB* bikeDBRef, RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeDBRef = bikeDBRef;
	this->rentDBRef = rentDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : BikeRent::bikeRentStart
	���	  : main���� ������ �뿩�� �����Ű�� ���� �Լ��� BikeRentUI boundary class ��ü�� �����ϰ� BikeRentUI�� ������ �а� ��Ų��
	���� ���� : ����
	��ȯ��    : ����
*/
void BikeRent::bikeRentStart()
{
	bikeRentUIRef = new BikeRentUI(this, out_fp, in_fp);	// bikeRentUIRef�� BikeRentUI ��ü reference ����
	bikeRentUIRef->readInputFile();							// BikeRentUI�� ������ �е��� �Ѵ�
}

/*
	�Լ� �̸� : BikeRent::requestBikeRent
	���	  : BikeRentUI���� BikeRent���� ������ �뿩�� �ʿ��� ������ ������ ������ �뿩 �ϵ��� ��û�Ѵ�
	���� ���� : id, password, phone -> ������ �뿩�� �ʿ��� ����
	��ȯ��    : ����
*/
void BikeRent::requestBikeRent(string bikeId)
{
	BikeInfo* bikeInfo = bikeDBRef->getBikeInfo(bikeId);				// bikeInfo��� ������ ������ BikeDB�� �뿩�� �����Ÿ� �����Ѵ�
	pair<string, string> bikeInfoDetails = bikeInfo->getBikeInfo();		// bikeInfoDetails��� �� BikeInfo�κ��� ������ ������ �����ͼ� �����Ѵ�
	string userId = sessionRef->getCurrentUserId();						// userId�� ���� �α����� ������ id�� �����Ѵ�
	rentDBRef->addRentBike(userId, bikeInfo);							// RentDB�� ���� �α����� ������ id�� ������ ������ �����Ű���� �Ѵ�
	bikeRentUIRef->showBikeRentMessage(bikeId, bikeInfoDetails.second);	// BikeRentUI�� ������ �뿩 ������ �Ѱ��ָ鼭 ������ �뿩 �Ϸ� �޼����� �����ֵ��� �Ѵ�
}