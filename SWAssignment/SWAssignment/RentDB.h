#ifndef RENT_D_B_H
#define RENT_D_B_H

#include <map>
#include <vector>
#include <string>

using namespace std;

class BikeInfo;

class RentDB
{
private:
	BikeInfo* bikeInfoRef;
	map<string, vector<BikeInfo*>> rentLists;

public:
	void addRentBike(string userId, BikeInfo* bikeInfo);

	vector<pair<string, string>> getBikeRentInfo(string userId);

	RentDB();
};
#endif
