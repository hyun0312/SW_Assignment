// 헤더 선언
#include "SignOutUI.h"
#include "SignOut.h"

/*
	함수 이름 : SignOutUI::SignOutUI
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : SignOut reference, output.txt reference
	반환값    : 없음
*/
SignOutUI::SignOutUI(SignOut* signOutRef, ofstream* out_fp)
{
	this->signOutRef = signOutRef;
	this->out_fp = out_fp;
}

/*
	함수 이름 : SignOutUI::readInputFile
	기능	  : SignOut의 requestSignOut 함수를 호출한다 (이 과제에서 로그아웃 할 때 actor가 행동을 하지 않기 때문에 바로 requestSignOut 호출)
	전달 인자 : 없음
	반환값    : 없음
*/
void SignOutUI::readInputFile()
{
	signOutRef->requestSignOut();
}

/*
	함수 이름 : SignOutUI::showSignOutMessage
	기능	  : 로그아웃 완료 메세지를 보여준다
	전달 인자 : id -> 로그아웃 완료 메세지를 보여주기 위해 필요한 정보
	반환값    : 없음
*/
void SignOutUI::showSignOutMessage(string id)
{
	*out_fp << "2.2. 로그아웃" << endl;
	*out_fp << "> " << id << endl;
	*out_fp << endl;
}