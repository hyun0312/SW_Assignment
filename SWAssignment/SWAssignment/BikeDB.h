#ifndef BIKE_D_B_H
#define BIKE_D_B_H

#include <string>

using namespace std;

class BikeInfo;

class BikeDB
{
private:
	BikeInfo* bikeInfo[50];

	int numBikes = 0;

public:
	void addNewBike(string bikeId, string bikeName);

	BikeInfo* getBikeInfo(string bikeId);

	BikeDB();

};
#endif
