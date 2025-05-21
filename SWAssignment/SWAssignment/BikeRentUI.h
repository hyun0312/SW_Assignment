#ifndef BIKE_RENT_U_I_H
#define BIKE_RENT_U_I_H

#include <string>
#include <fstream>

using namespace std;

class BikeRent;

class BikeRentUI
{
private:
	BikeRent* bikeRentRef;

	ofstream* out_fp;
	
	ifstream* in_fp;

public:
	void enterBikeRentInfo();

	void showBikeRentMessage(string bikeId, string bikeName);

	void readInputFile();

	BikeRentUI(BikeRent* bikeRentRef, ofstream* out_fp, ifstream* in_fp);
};
#endif
