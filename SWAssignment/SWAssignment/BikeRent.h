#ifndef BIKE_RENT_H
#define BIKE_RENT_H
// ��� ����
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class BikeRentUI;
class BikeDB;
class Session;
class RentDB;
class BikeInfo;

// ������ �뿩�� ���� BikeRent control class ����
class BikeRent
{
private:
	BikeRentUI* bikeRentUIRef;	// control class reference
	BikeDB* bikeDBRef;			// BikeDB reference
	Session* sessionRef;		// Session reference
	RentDB* rentDBRef;			// RentDB reference
	ofstream* out_fp;			// output.txt reference
	ifstream* in_fp;			// input.txt reference

public:
	BikeRent(BikeDB* bikeDBRef, RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp);	// ������
	void bikeRentStart();																					// main���� ������ �뿩�� �����Ų��
	void requestBikeRent(string bikeId);																	// ������ �뿩�� �ʿ��� ������ ���� ������ �뿩�� ��û�Ѵ�
};
#endif
