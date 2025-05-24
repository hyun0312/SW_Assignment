#ifndef SIGN_UP_U_I_H
#define SIGN_UP_U_I_H
// 헤더 선언
#include <fstream>
#include <string>

using namespace std;
// 클래스 선언
class SignUp;

// 회원 가입을 위한 SignUpUI boundary class 정의
class SignUpUI
{
private:
	SignUp* signUpRef;	// control class reference
	ofstream* out_fp;	// output.txt reference
	ifstream* in_fp;	// input.txt reference

public:
	SignUpUI(SignUp* signUpRef, ofstream* out_fp, ifstream* in_fp);		// 생성자
	void readInputFile();												// 원래는 유저가 정보를 입력하도록 UI를 보여주기 위한 함수지만 이 과제에서는 입력을 파일로 대체한다
	void enterSignUpInfo();												// 원래는 유저가 정보를 입력하기 위한 함수지만 이 과제에서는 파일에서 읽어온다
	void showSignUpMessage(string id, string password, string phone);	// 회원 가입 완료 메세지를 보여준다
};
#endif