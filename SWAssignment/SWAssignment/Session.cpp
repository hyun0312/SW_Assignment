// 헤더 선언
#include "Session.h"
#include "UserInfo.h"

// 기본 생성자
Session::Session()
{

}

/*
	함수 이름 : Session::setAdministratorInfo
	기능	  : isAdministrator = true로 저장한다
	전달 인자 : 없음
	반환값    : 없음
*/
void Session::setAdministratorInfo()
{
	isAdministrator = true;
}

/*
	함수 이름 : Session::signIn
	기능	  : userInfoRef에 현재 로그인한 UserInfo의 포인터를 저장한다
	전달 인자 : UserInfo reference
	반환값    : 없음
*/
void Session::signIn(UserInfo* userInfoRef)
{
	this->userInfoRef = userInfoRef;
}

/*
	함수 이름 : Session::signOut
	기능	  : 로그아웃 할때 관리자이면 isAdministrator = false로 초기화해주고 유저면 userInfoRef를 null로 초기화해주고 id를 받아와서 id를 반환한다
	전달 인자 : 없음
	반환값    : 로그인 되어있던 유저 id
*/
string Session::signOut()
{
	if (isAdministrator) {			// 관리자면
		isAdministrator = false;	// isAdministrator = false로 초기화해주고
		string id = "admin";		// id를 "admin"으로 설정해주고
		return id;					// id를 반환한다
	}
	else {									// 유저면
		string id = getCurrentUserId();		// 로그인한 유저의 id를 가져오고
		userInfoRef = nullptr;				// userInfoRef를 null로 초기화해주고
		return id;							// id를 반환한다
	}
}

/*
	함수 이름 : Session::getCurrentUserId
	기능	  : 현재 로그인한 유저의 UserInfo에 접근해 id를 반환한다
	전달 인자 : 없음
	반환값    : 현재 로그인한 유저 id
*/
string Session::getCurrentUserId()
{
	string id = userInfoRef->getCurrentUserId();	// 현재 로그인한 유저의 UserInfo에 접근해 id를 가져오고
	return id;										// id를 반환한다
}