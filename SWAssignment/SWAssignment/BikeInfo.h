#ifndef BIKE_INFO_H
#define BIKE_INFO_H
// ��� ����
#include <string>

using namespace std;

// �������� ������ ������ �ִ� BikeInfo entity class
class BikeInfo
{
private:
	string bikeId;		// ������ id
	string bikeName;	// ������ �̸�

public:
	BikeInfo(string bikeId, string bikeName);	// ������
	bool isBikeInfo(string bikeId);				// ������ bikeId�� �ش� �����Ű� �ִ��� Ȯ���Ѵ�
	pair<string, string> getBikeInfo();			// ���� ����Ǿ� �ִ� �������� bikeId�� bikeName�� ��ȯ�Ѵ�
};
#endif
