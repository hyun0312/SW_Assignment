#include "SignInUI.h"
#include "SignIn.h"

void SignInUI::enterSignInInfo()
{
	string id, password;
	*in_fp >> id >> password;
	signInRef->requestSignIn(id, password);
}

void SignInUI::showSignInMessage(string id, string password)
{
	*out_fp << "2.1. ·Î±×ÀÎ\n" << "> " << id << " " << password << "\n\n";
}

void SignInUI::readInputFile()
{
	enterSignInInfo();
}

SignInUI::SignInUI(SignIn* signInRef, ofstream* out_fp, ifstream* in_fp)
{
	this->signInRef = signInRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
