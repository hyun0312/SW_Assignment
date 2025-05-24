// ��� ����
#include "Session.h"
#include "UserInfo.h"

// �⺻ ������
Session::Session()
{

}

/*
	�Լ� �̸� : Session::setAdministratorInfo
	���	  : isAdministrator = true�� �����Ѵ�
	���� ���� : ����
	��ȯ��    : ����
*/
void Session::setAdministratorInfo()
{
	isAdministrator = true;
}

/*
	�Լ� �̸� : Session::signIn
	���	  : userInfoRef�� ���� �α����� UserInfo�� �����͸� �����Ѵ�
	���� ���� : UserInfo reference
	��ȯ��    : ����
*/
void Session::signIn(UserInfo* userInfoRef)
{
	this->userInfoRef = userInfoRef;
}

/*
	�Լ� �̸� : Session::signOut
	���	  : �α׾ƿ� �Ҷ� �������̸� isAdministrator = false�� �ʱ�ȭ���ְ� ������ userInfoRef�� null�� �ʱ�ȭ���ְ� id�� �޾ƿͼ� id�� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : �α��� �Ǿ��ִ� ���� id
*/
string Session::signOut()
{
	if (isAdministrator) {			// �����ڸ�
		isAdministrator = false;	// isAdministrator = false�� �ʱ�ȭ���ְ�
		string id = "admin";		// id�� "admin"���� �������ְ�
		return id;					// id�� ��ȯ�Ѵ�
	}
	else {									// ������
		string id = getCurrentUserId();		// �α����� ������ id�� ��������
		userInfoRef = nullptr;				// userInfoRef�� null�� �ʱ�ȭ���ְ�
		return id;							// id�� ��ȯ�Ѵ�
	}
}

/*
	�Լ� �̸� : Session::getCurrentUserId
	���	  : ���� �α����� ������ UserInfo�� ������ id�� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : ���� �α����� ���� id
*/
string Session::getCurrentUserId()
{
	string id = userInfoRef->getCurrentUserId();	// ���� �α����� ������ UserInfo�� ������ id�� ��������
	return id;										// id�� ��ȯ�Ѵ�
}