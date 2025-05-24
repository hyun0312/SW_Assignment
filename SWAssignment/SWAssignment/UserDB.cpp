// ��� ����
#include "UserDB.h"
#include "UserInfo.h"

// �⺻ ������
UserDB::UserDB()
{

}

/*
	�Լ� �̸� : UserDB::addNewUser
	���	  : id, password, phone�� �޾ƿͼ� ���ο� UserInfo ��ü�� ����� �� ������ userInfo ����Ʈ�� �����Ѵ�
	���� ���� : id, password, phone -> ���ο� ������ ���鶧 �ʿ��� ����
	��ȯ��    : ����
*/
void UserDB::addNewUser(string id, string password, string phone)
{
	userInfo[numUsers++] = new UserInfo(id, password, phone);	// ���ο� UserInfo ��ü�� ����� �� ������ userInfo ����Ʈ�� �����Ѵ�
}

/*
	�Լ� �̸� : UserDB::getMemberInfo
	���	  : isMemberInfo �Լ��� �ش� userInfo ����Ʈ�� ���� ������ ������ �ش� userInfo�� ��ȯ�Ѵ�
	���� ���� : id -> ����Ǿ� �ִ� �����߿� �ش� id�� ���� ������ �����ϴ��� Ȯ���Ѵ�
	��ȯ��    : userInfo ����Ʈ�� ����� UserInfo* type ��ȯ
*/
UserInfo* UserDB::getMemberInfo(string id)
{
	for (int i = 0; i < numUsers; i++) {		// ����� ���� ����ŭ for���� �����鼭
		if (userInfo[i]->isMemberInfo(id)) {	// userInfo�� �ش� id�� ���� ������ ������
			return userInfo[i];					// �ش� userInfo[i]�� ��ȯ�Ѵ�
		}
	}
}