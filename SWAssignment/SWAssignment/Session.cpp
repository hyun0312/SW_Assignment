#include "Session.h"
#include "UserInfo.h"

void Session::signIn(UserInfo* userInfoRef)
{
	this->userInfoRef = userInfoRef;
}

string Session::signOut()
{
	if (isAdministrator) {
		isAdministrator = false;
		string id = "admin";
		return id;
	}
	else {
		string id = getCurrentUserId();
		userInfoRef = nullptr;
		return id;
	}
}

string Session::getCurrentUserId()
{
	string id = userInfoRef->getCurrentUserId();
	return id;
}

void Session::setAdministratorInfo()
{
	isAdministrator = true;
}

Session::Session()
{

}