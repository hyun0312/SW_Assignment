// 헤더 선언
#include "SignUp.h"
#include "SignUpUI.h"
#include "UserDB.h"

/*
	함수 이름 : SignUp::SignUp
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : UserDB reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
SignUp::SignUp(UserDB* userDBRef, ofstream* out_fp, ifstream* in_fp)
{
	this->userDBRef = userDBRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : SignUp::signUpStart
	기능	  : main에서 회원 가입을 실행시키기 위한 함수로 SignUpUI boundary class 객체를 생성하고 SignUpUI가 파일을 읽게 시킨다
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUp::signUpStart()
{
	signUpUIRef = new SignUpUI(this, out_fp, in_fp);	// signUpUIRef에 SignUpUI 객체 reference 저장
	signUpUIRef->readInputFile();						// SignUpUI가 파일을 읽도록 한다
}

/*
	함수 이름 : SignUp::requestSignUp
	기능	  : SignUpUI에서 SignUp에게 회원 가입시 필요한 정보를 가지고 회원 가입 하도록 요청한다
	전달 인자 : id, password, phone -> 회원 가입시 필요한 정보
	반환값    : 없음
*/
void SignUp::requestSignUp(string id, string password, string phone)
{
	userDBRef->addNewUser(id, password, phone);				// UserDB에 회원 가입 정보를 넘겨주면서 새로운 유저를 저장시키도록 한다
	signUpUIRef->showSignUpMessage(id, password, phone);	// SignUpUI에 회원 가입 정보를 넘겨주면서 회원 가입 완료 메세지를 보여주도록 한다
}