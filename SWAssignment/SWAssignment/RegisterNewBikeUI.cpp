#include "RegisterNewBikeUI.h"
#include "RegisterNewBike.h"

extern ifstream in_fp;
extern ofstream out_fp;

void RegisterNewBikeUI::enterRegisterNewBikeInfo()
{
	string bikeId, bikeName;
	*in_fp >> bikeId >> bikeName;
	registerNewBikeRef->requestRegisterNewBike(bikeId, bikeName);
}

void RegisterNewBikeUI::showRegisterNewBikeMessage(string bikeId, string bikeName)
{
	*out_fp << "3.1. 자전거 등록\n" << "> " << bikeId << " " << bikeName << "\n\n";
}

void RegisterNewBikeUI::readInputFile()
{
	enterRegisterNewBikeInfo();
}

RegisterNewBikeUI::RegisterNewBikeUI(RegisterNewBike* registerNewBikeRef, ofstream* out_fp, ifstream* in_fp)
{
	this->registerNewBikeRef = registerNewBikeRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}
