// 헤더 선언
#include "SignUpUI.h"
#include "SignUp.h"

/*
	함수 이름 : SignUpUI::SignUpUI
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : SignUp reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
SignUpUI::SignUpUI(SignUp* signUpRef, ofstream* out_fp, ifstream* in_fp)
{
	this->signUpRef = signUpRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : SignUpUI::readInputFile
	기능	  : enterSignUpInfo 함수를 호출한다 (이 과제에서 actor의 행동을 input 파일로 대체하기 때문에 함수를 호출하는 역할만 수행한다)
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::readInputFile()
{
	enterSignUpInfo();
}

/*
	함수 이름 : SignUpUI::enterSignUpInfo
	기능	  : input.txt에서 id, password, phone 정보를 읽어오고 SignUp이 회원 가입을 하도록 요청한다
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::enterSignUpInfo()
{
	string id, password, phone;						// input.txt에서 읽어올 정보
	*in_fp >> id >> password >> phone;				// input.txt에서 정보 읽어오기
	signUpRef->requestSignUp(id, password, phone);	// SignUp이 읽어온 정보를 통해 회원 가입을 하도록 요청한다
}

/*
	함수 이름 : SignUpUI::showSignUpMessage
	기능	  : 회원 가입 완료 메세지를 보여준다
	전달 인자 : id, password, phone -> 회원 가입 완료 메세지를 보여주기 위해 필요한 정보
	반환값    : 없음
*/
void SignUpUI::showSignUpMessage(string id, string password, string phone)
{
	*out_fp << "1.1. 회원가입" << endl;
	*out_fp << "> " << id << " " << password << " " << phone << endl;
	*out_fp << endl;
}