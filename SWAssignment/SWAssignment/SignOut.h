#ifndef SIGN_OUT_H
#define SIGN_OUT_H
// ��� ����
#include <fstream>

using namespace std;
// Ŭ���� ����
class SignOutUI;
class Session;

// �α׾ƿ��� ���� SignOut control class ����
class SignOut
{
private:
	SignOutUI* signOutUIRef;	// boundary class reference
	Session* sessionRef;		// Session reference
	ofstream* out_fp;			// output.txt reference

public:
	SignOut(Session* sessionRef, ofstream* out_fp);	// ������
	void signOutStart();							// main���� �α׾ƿ��� �����Ų��
	void requestSignOut();							// �α׾ƿ��� ��û�Ѵ�
};
#endif
