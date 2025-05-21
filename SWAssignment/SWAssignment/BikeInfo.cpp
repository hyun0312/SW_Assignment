#include "BikeInfo.h"

BikeInfo::BikeInfo(string bikeId, string bikeName)
{
	this->bikeId = bikeId;
	this->bikeName = bikeName;
}

bool BikeInfo::isBikeInfo(string bikeId)
{
	if (this->bikeId == bikeId) {
		return true;
	}
	else {
		return false;
	}
}

pair<string, string> BikeInfo::getBikeRentInfo()
{
	return make_pair(bikeId, bikeName);
}
