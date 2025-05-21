#include "SignUpUI.h"
#include "SignUp.h"


void SignUpUI::enterSignUpInfo()
{
	string id, password, phone;
	*in_fp >> id >> password >> phone;
	signUpRef->requestSignUp(id, password, phone);
}

void SignUpUI::showSignUpMessage(string id, string password, string phone)
{
	*out_fp << "1.1. 회원가입\n" << "> " << id << " " << password << " " << phone << "\n\n";
}

void SignUpUI::readInputFile()
{
	enterSignUpInfo();
}

SignUpUI::SignUpUI(SignUp* signUpRef, ofstream* out_fp, ifstream* in_fp)
{
	this->signUpRef = signUpRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
