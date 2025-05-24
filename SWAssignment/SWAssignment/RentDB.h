#ifndef RENT_D_B_H
#define RENT_D_B_H
// ��� ����
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// Ŭ���� ����
class BikeInfo;

// ������ �뿩 ������ �����ϱ� ���� RentDB entity class
class RentDB
{
private:
	BikeInfo* bikeInfoRef;						// BikeInfo reference
	map<string, vector<BikeInfo*>> rentLists;	// ������ �뿩�� ������ ����Ʈ

public:
	RentDB();														// ������
	void addRentBike(string userId, BikeInfo* bikeInfo);			// userId�� BikeInfo�� �����͸� dictionary�� �����Ѵ�
	vector<pair<string, string>> getBikeRentInfo(string userId);	// userId�� ���� ������ �뿩�� ������ ������ vector�� ��ȯ�Ѵ�
};
#endif
