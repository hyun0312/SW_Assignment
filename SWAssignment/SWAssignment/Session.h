#ifndef SESSION_H
#define SESSION_H

#include <string>

using namespace std;

class UserInfo;

class Session
{
private:
	UserInfo* userInfoRef;

	bool isAdministrator = false;

public:
	void signIn(UserInfo* userInfoRef);

	string signOut();

	string getCurrentUserId();

	void setAdministratorInfo();

	Session();
};
#endif
