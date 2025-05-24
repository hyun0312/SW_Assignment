// ��� ����
#include "RegisterNewBikeUI.h"
#include "RegisterNewBike.h"

/*
	�Լ� �̸� : RegisterNewBikeUI::RegisterNewBikeUI
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : RegisterNewBike reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
RegisterNewBikeUI::RegisterNewBikeUI(RegisterNewBike* registerNewBikeRef, ofstream* out_fp, ifstream* in_fp)
{
	this->registerNewBikeRef = registerNewBikeRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : RegisterNewBikeUI::readInputFile
	���	  : enterRegisterNewBikeInfo �Լ��� ȣ���Ѵ� (�� �������� actor�� �ൿ�� input ���Ϸ� ��ü�ϱ� ������ �Լ��� ȣ���ϴ� ���Ҹ� �����Ѵ�)
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterNewBikeUI::readInputFile()
{
	enterRegisterNewBikeInfo();
}

/*
	�Լ� �̸� : RegisterNewBikeUI::enterRegisterNewBikeInfo
	���	  : input.txt���� bikeId, bikeName ������ �о���� RegisterNewBike�� ������ ����� �ϵ��� ��û�Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterNewBikeUI::enterRegisterNewBikeInfo()
{
	string bikeId, bikeName;										// input.txt���� �о�� ����
	*in_fp >> bikeId >> bikeName;									// input.txt���� ���� �о����
	registerNewBikeRef->requestRegisterNewBike(bikeId, bikeName);	// RegisterNewBike�� �о�� ������ ���� ������ ����� �ϵ��� ��û�Ѵ�
}

/*
	�Լ� �̸� : RegisterNewBikeUI::showRegisterNewBikeMessage
	���	  : ������ ��� �Ϸ� �޼����� �����ش�
	���� ���� : bikeId, bikeName -> ������ ��� �Ϸ� �޼����� �����ֱ� ���� �ʿ��� ����
	��ȯ��    : ����
*/
void RegisterNewBikeUI::showRegisterNewBikeMessage(string bikeId, string bikeName)
{
	*out_fp << "3.1. ������ ���\n" << "> " << bikeId << " " << bikeName << endl;
	*out_fp << endl;
}