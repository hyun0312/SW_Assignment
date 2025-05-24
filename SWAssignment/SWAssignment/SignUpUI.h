#ifndef SIGN_UP_U_I_H
#define SIGN_UP_U_I_H
// ��� ����
#include <fstream>
#include <string>

using namespace std;
// Ŭ���� ����
class SignUp;

// ȸ�� ������ ���� SignUpUI boundary class ����
class SignUpUI
{
private:
	SignUp* signUpRef;	// control class reference
	ofstream* out_fp;	// output.txt reference
	ifstream* in_fp;	// input.txt reference

public:
	SignUpUI(SignUp* signUpRef, ofstream* out_fp, ifstream* in_fp);		// ������
	void readInputFile();												// ������ ������ ������ �Է��ϵ��� UI�� �����ֱ� ���� �Լ����� �� ���������� �Է��� ���Ϸ� ��ü�Ѵ�
	void enterSignUpInfo();												// ������ ������ ������ �Է��ϱ� ���� �Լ����� �� ���������� ���Ͽ��� �о�´�
	void showSignUpMessage(string id, string password, string phone);	// ȸ�� ���� �Ϸ� �޼����� �����ش�
};
#endif