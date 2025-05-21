#ifndef USER_INFO_H
#define USER_INFO_H

#include <string>

using namespace std;

class UserInfo
{
private:
	string id;

	string password;

	string phone;


public:
	UserInfo(string id, string password, string phone);

	bool isMemberInfo(string id);

	string getCurrentUserId();

};
#endif
