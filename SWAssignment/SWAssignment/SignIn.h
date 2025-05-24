#ifndef SIGN_IN_H
#define SIGN_IN_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class SignInUI;
class UserDB;
class Session;

// 로그인을 위한 SignIn control class 정의
class SignIn
{
private:
	SignInUI* signInUIRef;	// boundary class reference
	UserDB* userDBRef;		// UserDB reference
	Session* sessionRef;	// Session reference
	ofstream* out_fp;		// output.txt reference
	ifstream* in_fp;		// input.txt reference

public:
	SignIn(UserDB* userDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void signInStart();																	// main에서 로그인을 실행시킨다
	void requestSignIn(string id, string password);										// 로그인시 필요한 정보를 통해 로그인을 요청한다
};
#endif
