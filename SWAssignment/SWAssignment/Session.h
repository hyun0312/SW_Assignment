#ifndef SESSION_H
#define SESSION_H
// 헤더 선언
#include <string>

using namespace std;
// 클래스 선언
class UserInfo;

// 로그인 정보를 관리하기 위한 Session entity class
class Session
{
private:
	UserInfo* userInfoRef;			// UserInfo reference
	bool isAdministrator = false;	// 현재 로그인한 멤버가 관리자면 true, 유저면 false

public:
	Session();								// 생성자
	void setAdministratorInfo();			// 관리자가 로그인하면 isAdministrator = true로 저장한다
	void signIn(UserInfo* userInfoRef);		// 로그인하면 userInfoRef에 현재 로그인한 UserInfo의 포인터를 저장한다
	string signOut();						// 로그아웃하면 저장되어 있는 정보 null값으로 초기화하고 완료 메세지를 위해 id를 반환한다
	string getCurrentUserId();				// 현재 로그인된 유저의 id를 반환한다
};
#endif
