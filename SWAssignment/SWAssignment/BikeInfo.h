#ifndef BIKE_INFO_H
#define BIKE_INFO_H

#include <string>

using namespace std;

class BikeInfo
{
private:
	string bikeId;

	string bikeName;


public:
	BikeInfo(string bikeId, string bikeName);

	bool isBikeInfo(string bikeId);

	pair<string, string> getBikeRentInfo();

};
#endif
