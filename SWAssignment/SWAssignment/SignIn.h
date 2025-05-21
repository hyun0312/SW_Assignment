#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <string>
#include <fstream>

using namespace std;

class SignInUI;
class UserDB;
class Session;

class SignIn
{
private:
	SignInUI* signInUIRef;

	UserDB* userDBRef;

	Session* sessionRef;

	ofstream* out_fp;

	ifstream* in_fp;

public:
	void requestSignIn(string id, string password);
	void signInStart();
	SignIn(UserDB* userDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp);
};
#endif
