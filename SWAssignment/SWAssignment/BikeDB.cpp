// ��� ����
#include "BikeDB.h"
#include "BikeInfo.h"

// �⺻ ������
BikeDB::BikeDB()
{

}

/*
	�Լ� �̸� : BikeDB::addNewBike
	���	  : bikeId, bikeName�� �޾ƿͼ� ���ο� BikeInfo ��ü�� ����� �� ������ bikeInfo ����Ʈ�� �����Ѵ�
	���� ���� : bikeId, bikeName -> ���ο� �����Ÿ� ���鶧 �ʿ��� ����
	��ȯ��    : ����
*/
void BikeDB::addNewBike(string bikeId, string bikeName)
{
	bikeInfo[numBikes++] = new BikeInfo(bikeId, bikeName);	// ���ο� BikeInfo ��ü�� ����� �� ������ bikeInfo ����Ʈ�� �����Ѵ�
}

/*
	�Լ� �̸� : BikeDB::getBikeInfo
	���	  : isBikeInfo �Լ��� �ش� bikeInfo ����Ʈ�� ���� ������ ������ �ش� bikeInfo�� ��ȯ�Ѵ�
	���� ���� : bikeId -> ����Ǿ� �ִ� �������߿� �ش� bikeId�� ���� �����Ű� �����ϴ��� Ȯ���Ѵ�
	��ȯ��    : bikeInfo ����Ʈ�� ����� BikeInfo* type ��ȯ
*/
BikeInfo* BikeDB::getBikeInfo(string bikeId)
{
	for (int i = 0; i < numBikes; i++) {		// ����� ������ ����ŭ for���� �����鼭
		if (bikeInfo[i]->isBikeInfo(bikeId)) {	// bikeInfo�� �ش� bikeId�� ���� �����Ű� ������
			return bikeInfo[i];					// �ش� bikeInfo[i]�� ��ȯ�Ѵ�
		}
	}
}