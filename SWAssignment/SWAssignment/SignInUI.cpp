// ��� ����
#include "SignInUI.h"
#include "SignIn.h"

/*
	�Լ� �̸� : SignInUI::SignInUI
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : SignIn reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
SignInUI::SignInUI(SignIn* signInRef, ofstream* out_fp, ifstream* in_fp)
{
	this->signInRef = signInRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : SignInUI::readInputFile
	���	  : enterSignUpInfo �Լ��� ȣ���Ѵ� (�� �������� actor�� �ൿ�� input ���Ϸ� ��ü�ϱ� ������ �Լ��� ȣ���ϴ� ���Ҹ� �����Ѵ�)
	���� ���� : ����
	��ȯ��    : ����
*/
void SignInUI::readInputFile()
{
	enterSignInInfo();
}

/*
	�Լ� �̸� : SignInUI::enterSignInInfo
	���	  : input.txt���� id, password ������ �о���� SignIn�� �α����� �ϵ��� ��û�Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void SignInUI::enterSignInInfo()
{
	string id, password;					// input.txt���� �о�� ����
	*in_fp >> id >> password;				// input.txt���� ���� �о����
	signInRef->requestSignIn(id, password);	// SignIn�� �о�� ������ ���� �α����� �ϵ��� ��û�Ѵ�
}

/*
	�Լ� �̸� : SignInUI::showSignInMessage
	���	  : �α��� �Ϸ� �޼����� �����ش�
	���� ���� : id, password -> �α��� �Ϸ� �޼����� �����ֱ� ���� �ʿ��� ����
	��ȯ��    : ����
*/
void SignInUI::showSignInMessage(string id, string password)
{
	*out_fp << "2.1. �α���" << endl;
	*out_fp << "> " << id << " " << password << endl;
	*out_fp << endl;
}