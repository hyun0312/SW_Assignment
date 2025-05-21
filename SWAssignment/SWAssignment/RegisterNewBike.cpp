#include "RegisterNewBike.h"
#include "RegisterNewBikeUI.h"
#include "BikeDB.h"

void RegisterNewBike::requestRegisterNewBike(string bikeId, string bikeName)
{
	bikeDBRef->addNewBike(bikeId, bikeName);
	registerNewBikeUIRef->showRegisterNewBikeMessage(bikeId, bikeName);
}

void RegisterNewBike::registerNewBikeStart()
{
	registerNewBikeUIRef = new RegisterNewBikeUI(this, out_fp, in_fp);
	registerNewBikeUIRef->readInputFile();
}

RegisterNewBike::RegisterNewBike(BikeDB * bikeDBRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeDBRef = bikeDBRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
