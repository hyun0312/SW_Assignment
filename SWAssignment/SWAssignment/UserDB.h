#ifndef USER_D_B_H
#define USER_D_B_H
// 헤더 선언
#include <string>

using namespace std;
// 클래스 선언
class UserInfo;

// 유저 정보 저장을 위한 UserDB entity class 정의
class UserDB
{
private:
	UserInfo* userInfo[50];	// UserInfo 포인터를 저장하고 있는 리스트
	int numUsers = 0;		// 현재 저장되어 있는 유저 수

public:
	UserDB();													// 생성자
	void addNewUser(string id, string password, string phone);	// 새로운 유저 객체를 생성해 userInfo에 저장한다
	UserInfo* getMemberInfo(string id);							// 해당 id를 갖는 UserInfo 객체 포인터를 반환한다
};
#endif
