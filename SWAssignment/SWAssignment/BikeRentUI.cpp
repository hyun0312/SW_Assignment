#include "BikeRentUI.h"
#include "BikeRent.h"

void BikeRentUI::enterBikeRentInfo()
{
	string bikeId;
	*in_fp >> bikeId;
	bikeRentRef->requestBikeRent(bikeId);
}

void BikeRentUI::showBikeRentMessage(string bikeId, string bikeName)
{
	*out_fp << "4.1. 자전거 대여\n" << "> " << bikeId << " " << bikeName << "\n\n";
}

void BikeRentUI::readInputFile()
{
	enterBikeRentInfo();
}

BikeRentUI::BikeRentUI(BikeRent* bikeRentRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeRentRef = bikeRentRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
