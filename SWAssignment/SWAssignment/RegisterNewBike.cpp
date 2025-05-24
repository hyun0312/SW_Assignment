// ��� ����
#include "RegisterNewBike.h"
#include "RegisterNewBikeUI.h"
#include "BikeDB.h"

/*
	�Լ� �̸� : RegisterNewBike::RegisterNewBike
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : BikeDB reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
RegisterNewBike::RegisterNewBike(BikeDB * bikeDBRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeDBRef = bikeDBRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : RegisterNewBike::registerNewBikeStart
	���	  : main���� ȸ�� ������ �����Ű�� ���� �Լ��� RegisterNewBikeUI boundary class ��ü�� �����ϰ� RegisterNewBikeUI�� ������ �а� ��Ų��
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterNewBike::registerNewBikeStart()
{
	registerNewBikeUIRef = new RegisterNewBikeUI(this, out_fp, in_fp);	// registerNewBikeUIRef�� registerNewBikeUI ��ü reference ����
	registerNewBikeUIRef->readInputFile();								// registerNewBikeUI�� ������ �е��� �Ѵ�
}

/*
	�Լ� �̸� : RegisterNewBike::requestRegisterNewBike
	���	  : RegisterNewBikeUI���� RegisterNewBike���� ������ ��Ͻ� �ʿ��� ������ ������ ������ ��� �ϵ��� ��û�Ѵ�
	���� ���� : bikeId, bikeName -> ������ ��Ͻ� �ʿ��� ����
	��ȯ��    : ����
*/
void RegisterNewBike::requestRegisterNewBike(string bikeId, string bikeName)
{
	bikeDBRef->addNewBike(bikeId, bikeName);							// BikeDB�� ������ ��� ������ �Ѱ��ָ鼭 ���ο� �����Ÿ� �����Ű���� �Ѵ�
	registerNewBikeUIRef->showRegisterNewBikeMessage(bikeId, bikeName);	// RegisterNewBikeUI�� ������ ��� ������ �Ѱ��ָ鼭 ������ ��� �Ϸ� �޼����� �����ֵ��� �Ѵ�
}