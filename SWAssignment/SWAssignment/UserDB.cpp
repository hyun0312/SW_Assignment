#include "UserDB.h"
#include "UserInfo.h"

void UserDB::addNewUser(string id, string password, string phone)
{
	userInfo[numUsers++] = new UserInfo(id, password, phone);
}

UserInfo * UserDB::getMemberInfo(string id)
{
	for (int i = 0; i < numUsers; i++) {
		if (userInfo[i]->isMemberInfo(id)) {
			return userInfo[i];
		}
	}
}

UserDB::UserDB()
{

}
