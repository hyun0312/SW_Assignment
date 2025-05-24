// ��� ����
#include "BikeRentUI.h"
#include "BikeRent.h"

/*
	�Լ� �̸� : BikeRentUI::BikeRentUI
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : BikeRent reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
BikeRentUI::BikeRentUI(BikeRent* bikeRentRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeRentRef = bikeRentRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : BikeRentUI::readInputFile
	���	  : enterBikeRentInfo �Լ��� ȣ���Ѵ� (�� �������� actor�� �ൿ�� input ���Ϸ� ��ü�ϱ� ������ �Լ��� ȣ���ϴ� ���Ҹ� �����Ѵ�)
	���� ���� : ����
	��ȯ��    : ����
*/
void BikeRentUI::readInputFile()
{
	enterBikeRentInfo();
}

/*
	�Լ� �̸� : BikeRentUI::enterBikeRentInfo
	���	  : input.txt���� bikeId ������ �о���� BikeRent�� ������ �뿩�� �ϵ��� ��û�Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void BikeRentUI::enterBikeRentInfo()
{
	string bikeId;							// input.txt���� �о�� ����
	*in_fp >> bikeId;						// input.txt���� ���� �о����
	bikeRentRef->requestBikeRent(bikeId);	// BikeRent�� �о�� ������ ���� ������ �뿩�� �ϵ��� ��û�Ѵ�
}

/*
	�Լ� �̸� : BikeRentUI::showBikeRentMessage
	���	  : ������ �뿩 �Ϸ� �޼����� �����ش�
	���� ���� : bikeId, bikeName -> ������ �뿩 �Ϸ� �޼����� �����ֱ� ���� �ʿ��� ����
	��ȯ��    : ����
*/
void BikeRentUI::showBikeRentMessage(string bikeId, string bikeName)
{
	*out_fp << "4.1. ������ �뿩" << endl;
	*out_fp << "> " << bikeId << " " << bikeName << endl;
	*out_fp << endl;
}