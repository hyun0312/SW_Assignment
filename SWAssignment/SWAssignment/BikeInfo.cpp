// ��� ����
#include "BikeInfo.h"

/*
	�Լ� �̸� : BikeInfo::BikeInfo
	���	  : ������ bikeId, bikeName ������ �����Ѵ�
	���� ���� : bikeId, bikeName -> �������� ������ �����ϱ� ���� ����
	��ȯ��    : ����
*/
BikeInfo::BikeInfo(string bikeId, string bikeName)
{
	this->bikeId = bikeId;
	this->bikeName = bikeName;
}

/*
	�Լ� �̸� : BikeInfo::isBikeInfo
	���	  : bikeId�� �޾ƿͼ� ����Ǿ� �ִ� bikeId�� ���� ��ġ�ϸ� true�� ��ȯ�Ѵ�
	���� ���� : bikeId -> ����Ǿ� �ִ� bikeId�� ���ϱ� ���� �ʿ��� ����
	��ȯ��    : ��ġ�ϸ� true, ��ġ���� ������ false
*/
bool BikeInfo::isBikeInfo(string bikeId)
{
	if (this->bikeId == bikeId) {
		return true;
	}
	else {
		return false;
	}
}

/*
	�Լ� �̸� : BikeInfo::getBikeInfo
	���	  : ���� ����Ǿ� �ִ� bikeId�� bikeName�� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : ����Ǿ� �ִ� bikeId�� bikeName
*/
pair<string, string> BikeInfo::getBikeInfo()
{
	return make_pair(bikeId, bikeName);
}
