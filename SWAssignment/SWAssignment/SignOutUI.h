#ifndef SIGN_OUT_U_I_H
#define SIGN_OUT_U_I_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class SignOut;

// �α׾ƿ��� ���� SignOutUI boundary class ����
class SignOutUI
{
private:
	SignOut* signOutRef;	// control class reference
	ofstream* out_fp;		// output.txt reference

public:
	SignOutUI(SignOut* signOutRef, ofstream* out_fp);	
	void readInputFile();								// ������ ������ ������ �Է��ϵ��� UI�� �����ֱ� ���� �Լ����� �� ���������� �Է��� ���Ϸ� ��ü�Ѵ�
	void showSignOutMessage(string id);					// �α׾ƿ� �Ϸ� �޼����� �����ش�
};
#endif
