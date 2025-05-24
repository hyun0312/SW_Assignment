#ifndef SIGN_IN_H
#define SIGN_IN_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class SignInUI;
class UserDB;
class Session;

// �α����� ���� SignIn control class ����
class SignIn
{
private:
	SignInUI* signInUIRef;	// boundary class reference
	UserDB* userDBRef;		// UserDB reference
	Session* sessionRef;	// Session reference
	ofstream* out_fp;		// output.txt reference
	ifstream* in_fp;		// input.txt reference

public:
	SignIn(UserDB* userDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void signInStart();																	// main���� �α����� �����Ų��
	void requestSignIn(string id, string password);										// �α��ν� �ʿ��� ������ ���� �α����� ��û�Ѵ�
};
#endif
