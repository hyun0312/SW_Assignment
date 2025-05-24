// ��� ����
#include "SignUpUI.h"
#include "SignUp.h"

/*
	�Լ� �̸� : SignUpUI::SignUpUI
	���	  : ��ü���� reference�� private ������ ���� �����Ѵ�
	���� ���� : SignUp reference, output.txt reference, input.txt reference
	��ȯ��    : ����
*/
SignUpUI::SignUpUI(SignUp* signUpRef, ofstream* out_fp, ifstream* in_fp)
{
	this->signUpRef = signUpRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	�Լ� �̸� : SignUpUI::readInputFile
	���	  : enterSignUpInfo �Լ��� ȣ���Ѵ� (�� �������� actor�� �ൿ�� input ���Ϸ� ��ü�ϱ� ������ �Լ��� ȣ���ϴ� ���Ҹ� �����Ѵ�)
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUpUI::readInputFile()
{
	enterSignUpInfo();
}

/*
	�Լ� �̸� : SignUpUI::enterSignUpInfo
	���	  : input.txt���� id, password, phone ������ �о���� SignUp�� ȸ�� ������ �ϵ��� ��û�Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUpUI::enterSignUpInfo()
{
	string id, password, phone;						// input.txt���� �о�� ����
	*in_fp >> id >> password >> phone;				// input.txt���� ���� �о����
	signUpRef->requestSignUp(id, password, phone);	// SignUp�� �о�� ������ ���� ȸ�� ������ �ϵ��� ��û�Ѵ�
}

/*
	�Լ� �̸� : SignUpUI::showSignUpMessage
	���	  : ȸ�� ���� �Ϸ� �޼����� �����ش�
	���� ���� : id, password, phone -> ȸ�� ���� �Ϸ� �޼����� �����ֱ� ���� �ʿ��� ����
	��ȯ��    : ����
*/
void SignUpUI::showSignUpMessage(string id, string password, string phone)
{
	*out_fp << "1.1. ȸ������" << endl;
	*out_fp << "> " << id << " " << password << " " << phone << endl;
	*out_fp << endl;
}