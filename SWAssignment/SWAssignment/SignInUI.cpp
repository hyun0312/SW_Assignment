// 헤더 선언
#include "SignInUI.h"
#include "SignIn.h"

/*
	함수 이름 : SignInUI::SignInUI
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : SignIn reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
SignInUI::SignInUI(SignIn* signInRef, ofstream* out_fp, ifstream* in_fp)
{
	this->signInRef = signInRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : SignInUI::readInputFile
	기능	  : enterSignUpInfo 함수를 호출한다 (이 과제에서 actor의 행동을 input 파일로 대체하기 때문에 함수를 호출하는 역할만 수행한다)
	전달 인자 : 없음
	반환값    : 없음
*/
void SignInUI::readInputFile()
{
	enterSignInInfo();
}

/*
	함수 이름 : SignInUI::enterSignInInfo
	기능	  : input.txt에서 id, password 정보를 읽어오고 SignIn이 로그인을 하도록 요청한다
	전달 인자 : 없음
	반환값    : 없음
*/
void SignInUI::enterSignInInfo()
{
	string id, password;					// input.txt에서 읽어올 정보
	*in_fp >> id >> password;				// input.txt에서 정보 읽어오기
	signInRef->requestSignIn(id, password);	// SignIn이 읽어온 정보를 통해 로그인을 하도록 요청한다
}

/*
	함수 이름 : SignInUI::showSignInMessage
	기능	  : 로그인 완료 메세지를 보여준다
	전달 인자 : id, password -> 로그인 완료 메세지를 보여주기 위해 필요한 정보
	반환값    : 없음
*/
void SignInUI::showSignInMessage(string id, string password)
{
	*out_fp << "2.1. 로그인" << endl;
	*out_fp << "> " << id << " " << password << endl;
	*out_fp << endl;
}