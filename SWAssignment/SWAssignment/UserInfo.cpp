#include "UserInfo.h"

UserInfo::UserInfo(string id, string password, string phone)
{
	this->id = id;
	this->password = password;
	this->phone = phone;
}

bool UserInfo::isMemberInfo(string id)
{
	if (this->id == id) {
		return true;
	}
	else {
		return false;
	}
}

string UserInfo::getCurrentUserId()
{
	return id;
}
