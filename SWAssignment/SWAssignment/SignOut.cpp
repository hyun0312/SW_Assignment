// 헤더 선언
#include "SignOut.h"
#include "SignOutUI.h"
#include "Session.h"

/*
	함수 이름 : SignOut::SignOut
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : Session reference, output.txt reference
	반환값    : 없음
*/
SignOut::SignOut(Session* sessionRef, ofstream* out_fp)
{
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
}

/*
	함수 이름 : SignOut::signOutStart
	기능	  : main에서 로그아웃을 실행시키기 위한 함수로 SignOutUI boundary class 객체를 생성하고 SignOutUI가 파일을 읽게 시킨다
	전달 인자 : 없음
	반환값    : 없음
*/
void SignOut::signOutStart()
{
	signOutUIRef = new SignOutUI(this, out_fp);	// signOutUIRef에 SignOutUI 객체 reference 저장
	signOutUIRef->readInputFile();				// SignOutUI가 파일을 읽도록 한다
}

/*
	함수 이름 : SignOut::requestSignOut
	기능	  : SignOutUI에서 SignOut에게 로그아웃 하도록 요청한다
	전달 인자 : 없음
	반환값    : 없음
*/
void SignOut::requestSignOut()
{
	string id = sessionRef->signOut();		// Session에 signOut 함수를 실행시켜 현재 로그인한 유저의 id를 저장하도록 한다
	signOutUIRef->showSignOutMessage(id);	// SignOutUI에 유저의 id를 넘겨주면서 로그아웃 완료 메세지를 보여주도록 한다
}