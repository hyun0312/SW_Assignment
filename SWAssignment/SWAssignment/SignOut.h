#ifndef SIGN_OUT_H
#define SIGN_OUT_H

#include <fstream>

using namespace std;

class SignOutUI;
class Session;

class SignOut
{
private:
	SignOutUI* signOutUIRef;

	Session* sessionRef;

	ofstream* out_fp;

public:
	void requestSignOut();
	SignOut(Session* sessionRef, ofstream* out_fp);
	void signOutStart();
};
#endif
