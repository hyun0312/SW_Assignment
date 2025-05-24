// ��� ����
#include "SignOut.h"
#include "SignOutUI.h"
#include "Session.h"

/*
	�Լ� �̸� : SignOut::SignOut
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : Session reference, output.txt reference
	��ȯ��    : ����
*/
SignOut::SignOut(Session* sessionRef, ofstream* out_fp)
{
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
}

/*
	�Լ� �̸� : SignOut::signOutStart
	���	  : main���� �α׾ƿ��� �����Ű�� ���� �Լ��� SignOutUI boundary class ��ü�� �����ϰ� SignOutUI�� ������ �а� ��Ų��
	���� ���� : ����
	��ȯ��    : ����
*/
void SignOut::signOutStart()
{
	signOutUIRef = new SignOutUI(this, out_fp);	// signOutUIRef�� SignOutUI ��ü reference ����
	signOutUIRef->readInputFile();				// SignOutUI�� ������ �е��� �Ѵ�
}

/*
	�Լ� �̸� : SignOut::requestSignOut
	���	  : SignOutUI���� SignOut���� �α׾ƿ� �ϵ��� ��û�Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void SignOut::requestSignOut()
{
	string id = sessionRef->signOut();		// Session�� signOut �Լ��� ������� ���� �α����� ������ id�� �����ϵ��� �Ѵ�
	signOutUIRef->showSignOutMessage(id);	// SignOutUI�� ������ id�� �Ѱ��ָ鼭 �α׾ƿ� �Ϸ� �޼����� �����ֵ��� �Ѵ�
}