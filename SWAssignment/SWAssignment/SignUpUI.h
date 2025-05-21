#ifndef SIGN_UP_U_I_H
#define SIGN_UP_U_I_H

#include <fstream>
#include <string>

using namespace std;

class SignUp;

class SignUpUI
{
private:
	SignUp* signUpRef;

	ofstream* out_fp;

	ifstream* in_fp;

public:
	void enterSignUpInfo();

	void showSignUpMessage(string id, string password, string phone);

	void readInputFile();

	SignUpUI(SignUp* signUpRef, ofstream* out_fp, ifstream* in_fp);
};
#endif
