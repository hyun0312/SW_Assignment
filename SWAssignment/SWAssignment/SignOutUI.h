#ifndef SIGN_OUT_U_I_H
#define SIGN_OUT_U_I_H

#include <string>
#include <fstream>

using namespace std;

class SignOut;

class SignOutUI
{
private:
	SignOut* signOutRef;
	
	ofstream* out_fp;

public:
	void showSignOutMessage(string id);

	void readInputFile();

	SignOutUI(SignOut* signOutRef, ofstream* out_fp);
};
#endif
