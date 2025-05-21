#include "RentDB.h"
#include "BikeInfo.h"

void RentDB::addRentBike(string userId, BikeInfo* bikeInfo)
{
	vector<BikeInfo*> currentBikeInfoList;
	if (rentLists[userId].empty()) {
		rentLists[userId] = { bikeInfo };
	}
	else {
		currentBikeInfoList = rentLists[userId];
		currentBikeInfoList.push_back(bikeInfo);
		rentLists[userId] = currentBikeInfoList;
	}
}

vector<pair<string, string>> RentDB::getBikeRentInfo(string userId)
{
	vector<BikeInfo*> rentBikeInfo = rentLists[userId];
	vector<pair<string, string>> rentBikeInfoDetails;
	for (int i = 0; i < rentBikeInfo.size(); i++) {
		rentBikeInfoDetails.push_back(rentBikeInfo[i]->getBikeRentInfo());
	}
	return rentBikeInfoDetails;
}

RentDB::RentDB()
{

}
