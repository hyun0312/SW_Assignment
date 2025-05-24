#ifndef REGISTER_NEW_BIKE_H
#define REGISTER_NEW_BIKE_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class RegisterNewBikeUI;
class BikeDB;

// ������ ����� ���� RegisterNewBike control class ����
class RegisterNewBike
{
private:
	RegisterNewBikeUI* registerNewBikeUIRef;	// boundary class reference
	BikeDB* bikeDBRef;							// BikeDB reference
	ofstream* out_fp;							// output.txt reference
	ifstream* in_fp;							// input.txt reference

public:
	RegisterNewBike(BikeDB* bikeDBRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void registerNewBikeStart();											// main���� ������ ����� �����Ų��
	void requestRegisterNewBike(string bikeId, string bikeName);			// ������ ��Ͻ� �ʿ��� ������ ���� ������ ����� ��û�Ѵ�
};
#endif
