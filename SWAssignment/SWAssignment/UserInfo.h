#ifndef USER_INFO_H
#define USER_INFO_H
// 헤더 선언
#include <string>

using namespace std;

// 유저의 정보를 가지고 있는 UserInfo entity class
class UserInfo
{
private:
	string id;			// 유저 id
	string password;	// 유저 password
	string phone;		// 유저 전화번호


public:
	UserInfo(string id, string password, string phone);	// 생성자
	bool isMemberInfo(string id);						// 멤버 id로 해당 멤버가 있는지 확인한다
	string getCurrentUserId();							// 현재 로그인되어 있는 멤버의 id를 반환한다
};
#endif
