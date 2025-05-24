// ��� ����
#include "SignOutUI.h"
#include "SignOut.h"

/*
	�Լ� �̸� : SignOutUI::SignOutUI
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : SignOut reference, output.txt reference
	��ȯ��    : ����
*/
SignOutUI::SignOutUI(SignOut* signOutRef, ofstream* out_fp)
{
	this->signOutRef = signOutRef;
	this->out_fp = out_fp;
}

/*
	�Լ� �̸� : SignOutUI::readInputFile
	���	  : SignOut�� requestSignOut �Լ��� ȣ���Ѵ� (�� �������� �α׾ƿ� �� �� actor�� �ൿ�� ���� �ʱ� ������ �ٷ� requestSignOut ȣ��)
	���� ���� : ����
	��ȯ��    : ����
*/
void SignOutUI::readInputFile()
{
	signOutRef->requestSignOut();
}

/*
	�Լ� �̸� : SignOutUI::showSignOutMessage
	���	  : �α׾ƿ� �Ϸ� �޼����� �����ش�
	���� ���� : id -> �α׾ƿ� �Ϸ� �޼����� �����ֱ� ���� �ʿ��� ����
	��ȯ��    : ����
*/
void SignOutUI::showSignOutMessage(string id)
{
	*out_fp << "2.2. �α׾ƿ�" << endl;
	*out_fp << "> " << id << endl;
	*out_fp << endl;
}