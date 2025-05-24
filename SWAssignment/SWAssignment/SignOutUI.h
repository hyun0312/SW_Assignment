#ifndef SIGN_OUT_U_I_H
#define SIGN_OUT_U_I_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class SignOut;

// 로그아웃을 위한 SignOutUI boundary class 정의
class SignOutUI
{
private:
	SignOut* signOutRef;	// control class reference
	ofstream* out_fp;		// output.txt reference

public:
	SignOutUI(SignOut* signOutRef, ofstream* out_fp);	
	void readInputFile();								// 원래는 유저가 정보를 입력하도록 UI를 보여주기 위한 함수지만 이 과제에서는 입력을 파일로 대체한다
	void showSignOutMessage(string id);					// 로그아웃 완료 메세지를 보여준다
};
#endif
