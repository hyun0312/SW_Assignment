#ifndef SHOW_BIKE_RENT_U_I_H
#define SHOW_BIKE_RENT_U_I_H
// ��� ����
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// Ŭ���� ����
class ShowBikeRent;

// ������ �뿩 ���� ����� ���� ShowBikeRentUI boundary class ����
class ShowBikeRentUI
{
private:
	ShowBikeRent* showBikeRentRef;	// control class reference
	ofstream* out_fp;				// output.txt reference

public:
	ShowBikeRentUI(ShowBikeRent* showBikeRentRef, ofstream* out_fp);	// ������
	void readInputFile();												// ������ ������ ������ �Է��ϵ��� UI�� �����ֱ� ���� �Լ����� �� ���������� �Է��� ���Ϸ� ��ü�Ѵ�
	void showBikeRentList(vector<pair<string, string>> rentLists);		// ������ �뿩 ���� ����Ʈ�� �����ش�
};
#endif
