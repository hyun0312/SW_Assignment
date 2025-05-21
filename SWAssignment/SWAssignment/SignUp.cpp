#include "SignUp.h"
#include "SignUpUI.h"
#include "UserDB.h"

void SignUp::requestSignUp(string id, string password, string phone)
{
	userDBRef->addNewUser(id, password, phone);
	signUpUIRef->showSignUpMessage(id, password, phone);
}

void SignUp::signUpStart() 
{
	signUpUIRef = new SignUpUI(this, out_fp, in_fp);
	signUpUIRef->readInputFile();
}

SignUp::SignUp(UserDB* userDBRef, ofstream* out_fp, ifstream* in_fp)
{
	this->userDBRef = userDBRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
