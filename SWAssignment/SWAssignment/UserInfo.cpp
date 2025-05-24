// ��� ����
#include "UserInfo.h"

/*
	�Լ� �̸� : UserInfo::UserInfo
	���	  : ���� id, password, phone ������ �����Ѵ�
	���� ���� : id, password, phone -> ������ ������ �����ϱ� ���� ����
	��ȯ��    : ����
*/
UserInfo::UserInfo(string id, string password, string phone)
{
	this->id = id;
	this->password = password;
	this->phone = phone;
}

/*
	�Լ� �̸� : UserInfo::isMemberInfo
	���	  : id�� �޾ƿͼ� ����Ǿ� �ִ� id�� ���� ��ġ�ϸ� true�� ��ȯ�Ѵ�
	���� ���� : id -> ����Ǿ� �ִ� id�� ���ϱ� ���� �ʿ��� ����
	��ȯ��    : ��ġ�ϸ� true, ��ġ���� ������ false
*/
bool UserInfo::isMemberInfo(string id)
{
	if (this->id == id) {
		return true;
	}
	else {
		return false;
	}
}

/*
	�Լ� �̸� : UserInfo::getCurrentUserId
	���	  : ���� ����Ǿ� �ִ� id�� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : ����Ǿ� �ִ� id
*/
string UserInfo::getCurrentUserId()
{
	return id;
}
