#ifndef USER_D_B_H
#define USER_D_B_H

#include <string>

using namespace std;

class UserInfo;

class UserDB
{
private:
	UserInfo* userInfo[50];

	int numUsers = 0;

public:
	void addNewUser(string id, string password, string phone);

	UserInfo* getMemberInfo(string id);

	UserDB();
};
#endif
