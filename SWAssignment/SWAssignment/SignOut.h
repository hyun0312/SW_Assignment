#ifndef SIGN_OUT_H
#define SIGN_OUT_H
// 헤더 선언
#include <fstream>

using namespace std;
// 클래스 선언
class SignOutUI;
class Session;

// 로그아웃을 위한 SignOut control class 정의
class SignOut
{
private:
	SignOutUI* signOutUIRef;	// boundary class reference
	Session* sessionRef;		// Session reference
	ofstream* out_fp;			// output.txt reference

public:
	SignOut(Session* sessionRef, ofstream* out_fp);	// 생성자
	void signOutStart();							// main에서 로그아웃을 실행시킨다
	void requestSignOut();							// 로그아웃을 요청한다
};
#endif
