#include "SignOut.h"
#include "SignOutUI.h"
#include "Session.h"

void SignOut::requestSignOut()
{
	string id = sessionRef->signOut();
	signOutUIRef->showSignOutMessage(id);
}

SignOut::SignOut(Session* sessionRef, ofstream* out_fp)
{
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
}

void SignOut::signOutStart()
{
	signOutUIRef = new SignOutUI(this, out_fp);
	signOutUIRef->readInputFile();
}
