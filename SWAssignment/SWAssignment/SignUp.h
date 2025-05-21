#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <string>
#include <fstream>

using namespace std;

class SignUpUI;
class UserDB;

class SignUp
{
private:
	SignUpUI* signUpUIRef;
	UserDB* userDBRef;
	ofstream* out_fp;

	ifstream* in_fp;

public:
	void requestSignUp(string id, string password, string phone);
	void signUpStart();
	SignUp(UserDB * userDBRef, ofstream* out_fp, ifstream* in_fp);
};
#endif