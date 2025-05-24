#ifndef USER_D_B_H
#define USER_D_B_H
// ��� ����
#include <string>

using namespace std;
// Ŭ���� ����
class UserInfo;

// ���� ���� ������ ���� UserDB entity class ����
class UserDB
{
private:
	UserInfo* userInfo[50];	// UserInfo �����͸� �����ϰ� �ִ� ����Ʈ
	int numUsers = 0;		// ���� ����Ǿ� �ִ� ���� ��

public:
	UserDB();													// ������
	void addNewUser(string id, string password, string phone);	// ���ο� ���� ��ü�� ������ userInfo�� �����Ѵ�
	UserInfo* getMemberInfo(string id);							// �ش� id�� ���� UserInfo ��ü �����͸� ��ȯ�Ѵ�
};
#endif
