// ��� ����
#include "SignIn.h"
#include "SignInUI.h"
#include "UserDB.h"
#include "Session.h"

/*
	�Լ� �̸� : SignIn::SignIn
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : UserDB reference, Session reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
SignIn::SignIn(UserDB* userDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp)
{
	this->userDBRef = userDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : SignIn::signInStart
	���	  : main���� ȸ�� ������ �����Ű�� ���� �Լ��� SignInUI boundary class ��ü�� �����ϰ� SignInUI�� ������ �а� ��Ų��
	���� ���� : ����
	��ȯ��    : ����
*/
void SignIn::signInStart()
{
	signInUIRef = new SignInUI(this, out_fp, in_fp);	// signInUIRef�� SignInUI ��ü reference ����
	signInUIRef->readInputFile();						// SignInUI�� ������ �е��� �Ѵ�
}

/*
	�Լ� �̸� : SignIn::requestSignIn
	���	  : SignInUI���� SignIn���� �α��ν� �ʿ��� ������ ������ �α��� �ϵ��� ��û�Ѵ�
	���� ���� : id, password -> �α��ν� �ʿ��� ����
	��ȯ��    : ����
*/
void SignIn::requestSignIn(string id, string password)
{
	if (id == "admin") {										// id == "admin" �̸� �����ڷ� �ν�
		sessionRef->setAdministratorInfo();						// Session�� ���� �α����� ����� �����ڶ�� �˷��ش�
	}
	else {
		UserInfo* currentUser = userDBRef->getMemberInfo(id);	// currentUser��� ������ ������ UserDB�κ��� ���� �α����� ������ �����ͼ� �����Ѵ�
		sessionRef->signIn(currentUser);						// Session�� currentUser�� �Ѱ��ָ鼭 �α��� �ϵ��� �Ѵ�
	}
	signInUIRef->showSignInMessage(id, password);				// SignInUI�� �α��� ������ �Ѱ��ָ鼭 �α��� �Ϸ� �޼����� �����ֵ��� �Ѵ�
}