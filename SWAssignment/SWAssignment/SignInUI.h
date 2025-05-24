#ifndef SIGN_IN_U_I_H
#define SIGN_IN_U_I_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class SignIn;

// �α����� ���� SignInUI boundary class ����
class SignInUI
{
private:
	SignIn* signInRef;	// control class reference
	ofstream* out_fp;	// output.txt reference
	ifstream* in_fp;	// input.txt reference

public:
	SignInUI(SignIn* signInRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void readInputFile();											// ������ ������ ������ �Է��ϵ��� UI�� �����ֱ� ���� �Լ����� �� ���������� �Է��� ���Ϸ� ��ü�Ѵ�
	void enterSignInInfo();											// ������ ������ ������ �Է��ϱ� ���� �Լ����� �� ���������� ���Ͽ��� �о�´�
	void showSignInMessage(string id, string password);				// �α��� �Ϸ� �޼����� �����ش�
};
#endif
