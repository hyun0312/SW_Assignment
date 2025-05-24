#ifndef SESSION_H
#define SESSION_H
// ��� ����
#include <string>

using namespace std;
// Ŭ���� ����
class UserInfo;

// �α��� ������ �����ϱ� ���� Session entity class
class Session
{
private:
	UserInfo* userInfoRef;			// UserInfo reference
	bool isAdministrator = false;	// ���� �α����� ����� �����ڸ� true, ������ false

public:
	Session();								// ������
	void setAdministratorInfo();			// �����ڰ� �α����ϸ� isAdministrator = true�� �����Ѵ�
	void signIn(UserInfo* userInfoRef);		// �α����ϸ� userInfoRef�� ���� �α����� UserInfo�� �����͸� �����Ѵ�
	string signOut();						// �α׾ƿ��ϸ� ����Ǿ� �ִ� ���� null������ �ʱ�ȭ�ϰ� �Ϸ� �޼����� ���� id�� ��ȯ�Ѵ�
	string getCurrentUserId();				// ���� �α��ε� ������ id�� ��ȯ�Ѵ�
};
#endif
