// 헤더 선언
#include "UserDB.h"
#include "UserInfo.h"

// 기본 생성자
UserDB::UserDB()
{

}

/*
	함수 이름 : UserDB::addNewUser
	기능	  : id, password, phone을 받아와서 새로운 UserInfo 객체를 만들고 그 정보를 userInfo 리스트에 저장한다
	전달 인자 : id, password, phone -> 새로운 유저를 만들때 필요한 정보
	반환값    : 없음
*/
void UserDB::addNewUser(string id, string password, string phone)
{
	userInfo[numUsers++] = new UserInfo(id, password, phone);	// 새로운 UserInfo 객체를 만들고 그 정보를 userInfo 리스트에 저장한다
}

/*
	함수 이름 : UserDB::getMemberInfo
	기능	  : isMemberInfo 함수로 해당 userInfo 리스트에 유저 정보가 있으면 해당 userInfo를 반환한다
	전달 인자 : id -> 저장되어 있는 유저중에 해당 id를 갖는 유저가 존재하는지 확인한다
	반환값    : userInfo 리스트에 저장된 UserInfo* type 반환
*/
UserInfo* UserDB::getMemberInfo(string id)
{
	for (int i = 0; i < numUsers; i++) {		// 저장된 유저 수만큼 for문을 돌리면서
		if (userInfo[i]->isMemberInfo(id)) {	// userInfo에 해당 id를 갖는 유저가 있으면
			return userInfo[i];					// 해당 userInfo[i]를 반환한다
		}
	}
}