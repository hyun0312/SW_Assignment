// ��� ����
#include "RentDB.h"
#include "BikeInfo.h"

// �⺻ ������
RentDB::RentDB()
{

}

/*
	�Լ� �̸� : RentDB::addRentBike
	���	  : userId�� Ű�� �ϰ� �뿩�� �������� BikeInfo �����͵��� ����Ʈ�� dictionary�� ���� �����Ѵ�
	���� ���� : userId, BikeInfo reference -> rentLists dictionary�� �����ϱ� ���� ����
	��ȯ��    : ����
*/
void RentDB::addRentBike(string userId, BikeInfo* bikeInfo)
{
	vector<BikeInfo*> currentBikeInfoList;			// �뿩�� �������� BikeInfo �����͵��� ������ ����Ʈ
	if (rentLists[userId].empty()) {				// rentLists dictionary�� userId�� Ű���� ������ ���� ��
		rentLists[userId] = { bikeInfo };			// userId�� Ű���ϰ� �ش� BikeInfo �����͸� value�� �ϴ� dictionary ����
	}
	else {											// rentLists dictionary�� userId�� Ű���� ������ ���� ��
		currentBikeInfoList = rentLists[userId];	// currentBikeInfoList�� ����Ǿ� �ִ� value������ ����Ʈ�� ��������
		currentBikeInfoList.push_back(bikeInfo);	// �ش� ����Ʈ�� BikeInfo �����͸� �߰��ϰ�
		rentLists[userId] = currentBikeInfoList;	// rentLists dictionary�� �ٽ� �����Ѵ�
	}
}

/*
	�Լ� �̸� : RentDB::getBikeRentInfo
	���	  : ���� �α����� ������ UserInfo�� ������ id�� ��ȯ�Ѵ�
	���� ���� : userId -> �ش� userId�� Ű������ �� value���� ��ȯ�ϱ� ���� ����
	��ȯ��    : rentBikeInfoDetails�� �뿩�� �������� bikeId�� bikeName ������ �̷���� vector ��ȯ
*/
vector<pair<string, string>> RentDB::getBikeRentInfo(string userId)
{
	vector<BikeInfo*> rentBikeInfo = rentLists[userId];					// rentBikeInfo vector�� userId�� Ű������ �ϴ� value�� ����
	vector<pair<string, string>> rentBikeInfoDetails;					// ��ȯ�� rentBikeInfoDetails vector ����
	for (int i = 0; i < rentBikeInfo.size(); i++) {						// ����� rentBikeInfo�� ������ŭ �ݺ�
		rentBikeInfoDetails.push_back(rentBikeInfo[i]->getBikeInfo());	// �ش� rentBikeInfo[i]�� bikeId�� bikeName�� rentBikeInfoDetails�� ����
	}
	sort(rentBikeInfoDetails.begin(), rentBikeInfoDetails.end());		// bikeId������ vector�� ���Ľ�Ű��
	return rentBikeInfoDetails;											// vector�� ��ȯ�Ѵ�
}