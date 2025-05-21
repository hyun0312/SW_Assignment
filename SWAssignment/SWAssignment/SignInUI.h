#ifndef SIGN_IN_U_I_H
#define SIGN_IN_U_I_H

#include <string>
#include <fstream>

using namespace std;

class SignIn;

class SignInUI
{
private:
	SignIn* signInRef;

	ofstream* out_fp;

	ifstream* in_fp;

public:
	void enterSignInInfo();

	void showSignInMessage(string id, string password);

	void readInputFile();

	SignInUI(SignIn* signInRef, ofstream* out_fp, ifstream* in_fp);
};
#endif
