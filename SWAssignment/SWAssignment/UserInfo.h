#ifndef USER_INFO_H
#define USER_INFO_H
// ��� ����
#include <string>

using namespace std;

// ������ ������ ������ �ִ� UserInfo entity class
class UserInfo
{
private:
	string id;			// ���� id
	string password;	// ���� password
	string phone;		// ���� ��ȭ��ȣ


public:
	UserInfo(string id, string password, string phone);	// ������
	bool isMemberInfo(string id);						// ��� id�� �ش� ����� �ִ��� Ȯ���Ѵ�
	string getCurrentUserId();							// ���� �α��εǾ� �ִ� ����� id�� ��ȯ�Ѵ�
};
#endif
