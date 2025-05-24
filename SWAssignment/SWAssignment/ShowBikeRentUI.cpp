// ��� ����
#include "ShowBikeRentUI.h"
#include "ShowBikeRent.h"

/*
	�Լ� �̸� : ShowBikeRentUI::ShowBikeRentUI
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : ShowBikeRent reference, output.txt reference
	��ȯ��    : ����
*/
ShowBikeRentUI::ShowBikeRentUI(ShowBikeRent* showBikeRentRef, ofstream* out_fp)
{
	this->showBikeRentRef = showBikeRentRef;
	this->out_fp = out_fp;
}

/*
	�Լ� �̸� : ShowBikeRentUI::readInputFile
	���	  : ShowBikeRent�� requestShowBikeRentList �Լ��� ȣ���Ѵ� (�� �������� ������ �뿩 ���� ��� �� �� actor�� �ൿ�� ���� �ʱ� ������ �ٷ� requestShowBikeRentList ȣ��)
	���� ���� : ����
	��ȯ��    : ����
*/
void ShowBikeRentUI::readInputFile()
{
	showBikeRentRef->requestShowBikeRentList();
}

/*
	�Լ� �̸� : ShowBikeRentUI::showBikeRentList
	���	  : �α׾ƿ� �Ϸ� �޼����� �����ش�
	���� ���� : rentLists -> ������ �뿩 ����Ʈ�� ����ϱ� ���� (������ id, ������ �̸�) �ֵ��� vector
	��ȯ��    : ����
*/
void ShowBikeRentUI::showBikeRentList(vector<pair<string, string>> rentLists)
{
	*out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;
	for (int i = 0; i < rentLists.size(); i++) {
		*out_fp << "> " << rentLists[i].first << " " << rentLists[i].second << endl;
	}
	*out_fp << endl;
}