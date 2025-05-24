#ifndef SIGN_IN_U_I_H
#define SIGN_IN_U_I_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class SignIn;

// 로그인을 위한 SignInUI boundary class 정의
class SignInUI
{
private:
	SignIn* signInRef;	// control class reference
	ofstream* out_fp;	// output.txt reference
	ifstream* in_fp;	// input.txt reference

public:
	SignInUI(SignIn* signInRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void readInputFile();											// 원래는 유저가 정보를 입력하도록 UI를 보여주기 위한 함수지만 이 과제에서는 입력을 파일로 대체한다
	void enterSignInInfo();											// 원래는 유저가 정보를 입력하기 위한 함수지만 이 과제에서는 파일에서 읽어온다
	void showSignInMessage(string id, string password);				// 로그인 완료 메세지를 보여준다
};
#endif
