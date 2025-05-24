#ifndef BIKE_D_B_H
#define BIKE_D_B_H
// ��� ����
#include <string>

using namespace std;
// Ŭ���� ����
class BikeInfo;

// ������ ���� ������ ���� BikeDB entity class ����
class BikeDB
{
private:
	BikeInfo* bikeInfo[50];	// BikeInfo �����͸� �����ϰ� �ִ� ����Ʈ
	int numBikes = 0;		// ���� ��ϵǾ� �ִ� ������ ��

public:
	BikeDB();											// ������
	void addNewBike(string bikeId, string bikeName);	// ���ο� ������ ��ü�� ������ bikeInfo�� �����Ѵ�
	BikeInfo* getBikeInfo(string bikeId);				// �ش� bikeId�� ���� BikeInfo ��ü �����͸� ��ȯ�Ѵ�
};
#endif
