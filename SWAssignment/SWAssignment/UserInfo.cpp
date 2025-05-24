// 헤더 선언
#include "UserInfo.h"

/*
	함수 이름 : UserInfo::UserInfo
	기능	  : 유저 id, password, phone 정보를 저장한다
	전달 인자 : id, password, phone -> 유저의 정보를 저장하기 위한 정보
	반환값    : 없음
*/
UserInfo::UserInfo(string id, string password, string phone)
{
	this->id = id;
	this->password = password;
	this->phone = phone;
}

/*
	함수 이름 : UserInfo::isMemberInfo
	기능	  : id를 받아와서 저장되어 있는 id와 비교해 일치하면 true를 반환한다
	전달 인자 : id -> 저장되어 있는 id와 비교하기 위해 필요한 정보
	반환값    : 일치하면 true, 일치하지 않으면 false
*/
bool UserInfo::isMemberInfo(string id)
{
	if (this->id == id) {
		return true;
	}
	else {
		return false;
	}
}

/*
	함수 이름 : UserInfo::getCurrentUserId
	기능	  : 현재 저장되어 있는 id를 반환한다
	전달 인자 : 없음
	반환값    : 저장되어 있는 id
*/
string UserInfo::getCurrentUserId()
{
	return id;
}
