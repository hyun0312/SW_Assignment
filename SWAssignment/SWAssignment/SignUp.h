#ifndef SIGN_UP_H
#define SIGN_UP_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class SignUpUI;
class UserDB;

// ȸ�� ������ ���� SignUp control class ����
class SignUp
{
private:
	SignUpUI* signUpUIRef; // boundary class reference
	UserDB* userDBRef;     // UserDB reference
	ofstream* out_fp;      // output.txt reference
	ifstream* in_fp;       // input.txt reference

public:
	SignUp(UserDB* userDBRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void signUpStart();												// main���� ȸ�� ������ �����Ų��
	void requestSignUp(string id, string password, string phone);	// ȸ�� ���Խ� �ʿ��� ������ ���� ȸ�� ������ ��û�Ѵ�
};
#endif
