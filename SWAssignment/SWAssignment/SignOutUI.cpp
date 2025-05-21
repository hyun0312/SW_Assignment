#include "SignOutUI.h"
#include "SignOut.h"

extern ofstream out_fp;

void SignOutUI::showSignOutMessage(string id)
{
	*out_fp << "2.2. ·Î±×¾Æ¿ô\n" << "> " << id << "\n\n";
}

void SignOutUI::readInputFile()
{
	signOutRef->requestSignOut();
}

SignOutUI::SignOutUI(SignOut* signOutRef, ofstream* out_fp)
{
	this->signOutRef = signOutRef;
	this->out_fp = out_fp;
}
