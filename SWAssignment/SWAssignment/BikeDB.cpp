#include "BikeDB.h"
#include "BikeInfo.h"

void BikeDB::addNewBike(string bikeId, string bikeName)
{
	bikeInfo[numBikes++] = new BikeInfo(bikeId, bikeName);
}

BikeInfo* BikeDB::getBikeInfo(string bikeId)
{
	for (int i = 0; i < numBikes; i++) {
		if (bikeInfo[i]->isBikeInfo(bikeId)) {
			return bikeInfo[i];
		}
	}
}

BikeDB::BikeDB()
{

}
