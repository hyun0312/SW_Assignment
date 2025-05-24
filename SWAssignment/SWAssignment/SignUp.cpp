// ��� ����
#include "SignUp.h"
#include "SignUpUI.h"
#include "UserDB.h"

/*
	�Լ� �̸� : SignUp::SignUp
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : UserDB reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
SignUp::SignUp(UserDB* userDBRef, ofstream* out_fp, ifstream* in_fp)
{
	this->userDBRef = userDBRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : SignUp::signUpStart
	���	  : main���� ȸ�� ������ �����Ű�� ���� �Լ��� SignUpUI boundary class ��ü�� �����ϰ� SignUpUI�� ������ �а� ��Ų��
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUp::signUpStart()
{
	signUpUIRef = new SignUpUI(this, out_fp, in_fp);	// signUpUIRef�� SignUpUI ��ü reference ����
	signUpUIRef->readInputFile();						// SignUpUI�� ������ �е��� �Ѵ�
}

/*
	�Լ� �̸� : SignUp::requestSignUp
	���	  : SignUpUI���� SignUp���� ȸ�� ���Խ� �ʿ��� ������ ������ ȸ�� ���� �ϵ��� ��û�Ѵ�
	���� ���� : id, password, phone -> ȸ�� ���Խ� �ʿ��� ����
	��ȯ��    : ����
*/
void SignUp::requestSignUp(string id, string password, string phone)
{
	userDBRef->addNewUser(id, password, phone);				// UserDB�� ȸ�� ���� ������ �Ѱ��ָ鼭 ���ο� ������ �����Ű���� �Ѵ�
	signUpUIRef->showSignUpMessage(id, password, phone);	// SignUpUI�� ȸ�� ���� ������ �Ѱ��ָ鼭 ȸ�� ���� �Ϸ� �޼����� �����ֵ��� �Ѵ�
}