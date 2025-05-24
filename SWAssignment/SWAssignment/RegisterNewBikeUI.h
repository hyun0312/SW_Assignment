#ifndef REGISTER_NEW_BIKE_U_I_H
#define REGISTER_NEW_BIKE_U_I_H
// ��� ����
#include <fstream>
#include <string>

using namespace std;
// Ŭ���� ����
class RegisterNewBike;

// ������ ����� ���� RegisterNewBikeUI boundary class ����
class RegisterNewBikeUI
{
private:
	RegisterNewBike* registerNewBikeRef;	// control class reference
	ofstream* out_fp;						// output.txt reference
	ifstream* in_fp;						// input.txt refererence

public:
	RegisterNewBikeUI(RegisterNewBike* registerNewBikeRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void readInputFile();																		// ������ ������ ������ �Է��ϵ��� UI�� �����ֱ� ���� �Լ����� �� ���������� �Է��� ���Ϸ� ��ü�Ѵ�
	void enterRegisterNewBikeInfo();															// ������ ������ ������ �Է��ϱ� ���� �Լ����� �� ���������� ���Ͽ��� �о�´�
	void showRegisterNewBikeMessage(string bikeId, string bikeName);							// ������ ��� �Ϸ� �޼����� �����ش�
};
#endif
