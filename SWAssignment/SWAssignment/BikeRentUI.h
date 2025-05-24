#ifndef BIKE_RENT_U_I_H
#define BIKE_RENT_U_I_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class BikeRent;

// ������ �뿩�� ���� BikeRentUI boundary class ����
class BikeRentUI
{
private:
	BikeRent* bikeRentRef;	// control class reference
	ofstream* out_fp;		// output.txt refernece
	ifstream* in_fp;		// input.txt reference

public:
	BikeRentUI(BikeRent* bikeRentRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void readInputFile();													// ������ ������ ������ �Է��ϵ��� UI�� �����ֱ� ���� �Լ����� �� ���������� �Է��� ���Ϸ� ��ü�Ѵ�
	void enterBikeRentInfo();												// ������ ������ ������ �Է��ϱ� ���� �Լ����� �� ���������� ���Ͽ��� �о�´�
	void showBikeRentMessage(string bikeId, string bikeName);				// ������ �뿩 �Ϸ� �޼����� �����ش�
};
#endif
