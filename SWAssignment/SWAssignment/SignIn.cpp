// 헤더 선언
#include "SignIn.h"
#include "SignInUI.h"
#include "UserDB.h"
#include "Session.h"

/*
	함수 이름 : SignIn::SignIn
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : UserDB reference, Session reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
SignIn::SignIn(UserDB* userDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp)
{
	this->userDBRef = userDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : SignIn::signInStart
	기능	  : main에서 회원 가입을 실행시키기 위한 함수로 SignInUI boundary class 객체를 생성하고 SignInUI가 파일을 읽게 시킨다
	전달 인자 : 없음
	반환값    : 없음
*/
void SignIn::signInStart()
{
	signInUIRef = new SignInUI(this, out_fp, in_fp);	// signInUIRef에 SignInUI 객체 reference 저장
	signInUIRef->readInputFile();						// SignInUI가 파일을 읽도록 한다
}

/*
	함수 이름 : SignIn::requestSignIn
	기능	  : SignInUI에서 SignIn에게 로그인시 필요한 정보를 가지고 로그인 하도록 요청한다
	전달 인자 : id, password -> 로그인시 필요한 정보
	반환값    : 없음
*/
void SignIn::requestSignIn(string id, string password)
{
	if (id == "admin") {										// id == "admin" 이면 관리자로 인식
		sessionRef->setAdministratorInfo();						// Session에 현재 로그인한 사람이 관리자라고 알려준다
	}
	else {
		UserInfo* currentUser = userDBRef->getMemberInfo(id);	// currentUser라는 포인터 변수에 UserDB로부터 현재 로그인한 유저를 가져와서 저장한다
		sessionRef->signIn(currentUser);						// Session에 currentUser를 넘겨주면서 로그인 하도록 한다
	}
	signInUIRef->showSignInMessage(id, password);				// SignInUI에 로그인 정보를 넘겨주면서 로그인 완료 메세지를 보여주도록 한다
}