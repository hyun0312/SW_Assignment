#ifndef SHOW_BIKE_RENT_H
#define SHOW_BIKE_RENT_H
// ��� ����
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class ShowBikeRentUI;
class RentDB;
class Session;

// ������ �뿩 ���� ����� ���� ShowBikeRent control class ����
class ShowBikeRent
{
private:
	ShowBikeRentUI* showBikeRentUIRef;	// control class reference
	RentDB* rentDBRef;					// RentDB reference
	Session* sessionRef;				// Session reference
	ofstream* out_fp;					// output.txt reference

public:
	ShowBikeRent(RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp);	// ������
	void showBikeRentStart();												// main���� ������ �뿩 ���� ����� �����Ų��
	void requestShowBikeRentList();											// ������ �뿩 ���� ����� ��û�Ѵ�
};
#endif
