#include "BikeRent.h"
#include "BikeRentUI.h"
#include "BikeDB.h"
#include "Session.h"
#include "RentDB.h"
#include "BikeInfo.h"

void BikeRent::requestBikeRent(string bikeId)
{
	string userId;
	BikeInfo* bikeInfo = bikeDBRef->getBikeInfo(bikeId);
	pair<string, string> bikeInfoDetails = bikeInfo->getBikeRentInfo();
	userId = sessionRef->getCurrentUserId();
	rentDBRef->addRentBike(userId, bikeInfo);
	bikeRentUIRef->showBikeRentMessage(bikeId, bikeInfoDetails.second);
}

void BikeRent::bikeRentStart()
{
	bikeRentUIRef = new BikeRentUI(this, out_fp, in_fp);
	bikeRentUIRef->readInputFile();
}

BikeRent::BikeRent(BikeDB* bikeDBRef, RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeDBRef = bikeDBRef;
	this->rentDBRef = rentDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
