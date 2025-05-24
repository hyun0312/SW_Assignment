// ��� ����
#include "ShowBikeRent.h"
#include "ShowBikeRentUI.h"
#include "RentDB.h"
#include "Session.h"

/*
	�Լ� �̸� : ShowBikeRent::ShowBikeRent
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : RentDB reference, Session refernece, output.txt reference
	��ȯ��    : ����
*/
ShowBikeRent::ShowBikeRent(RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp)
{
	this->rentDBRef = rentDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
}

/*
	�Լ� �̸� : ShowBikeRent::showBikeRentStart
	���	  : main���� ������ �뿩 ���� ����� �����Ű�� ���� �Լ��� ShowBikeRentUI boundary class ��ü�� �����ϰ� ShowBikeRentUI�� ������ �а� ��Ų��
	���� ���� : ����
	��ȯ��    : ����
*/
void ShowBikeRent::showBikeRentStart()
{
	showBikeRentUIRef = new ShowBikeRentUI(this, out_fp);	// showBikeRentUIRef�� ShowBikeRentUI ��ü reference ����
	showBikeRentUIRef->readInputFile();						// ShowBikeRent�� ������ �е��� �Ѵ�
}

/*
	�Լ� �̸� : ShowBikeRent::requestShowBikeRent
	���	  : ShowBikeRentUI���� ShowBikeRent���� ������ �뿩 ���� ��½� �ʿ��� ������ ������ ������ �뿩 ���� ��� �ϵ��� ��û�Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void ShowBikeRent::requestShowBikeRentList()
{
	string userId = sessionRef->getCurrentUserId();									// userId�� ���� �α����� ������ id�� �����Ѵ�
	vector<pair<string, string>> rentLists = rentDBRef->getBikeRentInfo(userId);	// rentLists�� RentDB�κ��� �ش� ������ �뿩�� bikeId, bikeName�� �����ͼ� �����Ѵ�
	showBikeRentUIRef->showBikeRentList(rentLists);									// ShowBikeRentUI�� ������ �뿩 ���� ����Ʈ�� �Ѱ��ָ鼭 ������ �뿩 ������ ����ϵ��� �Ѵ�
}