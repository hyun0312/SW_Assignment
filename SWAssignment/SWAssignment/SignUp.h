#ifndef SIGN_UP_H
#define SIGN_UP_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class SignUpUI;
class UserDB;

// 회원 가입을 위한 SignUp control class 정의
class SignUp
{
private:
	SignUpUI* signUpUIRef; // boundary class reference
	UserDB* userDBRef;     // UserDB reference
	ofstream* out_fp;      // output.txt reference
	ifstream* in_fp;       // input.txt reference

public:
	SignUp(UserDB* userDBRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void signUpStart();												// main에서 회원 가입을 실행시킨다
	void requestSignUp(string id, string password, string phone);	// 회원 가입시 필요한 정보를 통해 회원 가입을 요청한다
};
#endif
