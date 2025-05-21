#include "SignIn.h"
#include "SignInUI.h"
#include "UserDB.h"
#include "Session.h"

void SignIn::requestSignIn(string id, string password)
{
	if (id == "admin") {
		sessionRef->setAdministratorInfo();
	}
	else {
		UserInfo* currentUser = userDBRef->getMemberInfo(id);
		sessionRef->signIn(currentUser);
	}
	signInUIRef->showSignInMessage(id, password);
}

void SignIn::signInStart() 
{
	signInUIRef = new SignInUI(this, out_fp, in_fp);
	signInUIRef->readInputFile();
}

SignIn::SignIn(UserDB* userDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp)
{
	this->userDBRef = userDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
