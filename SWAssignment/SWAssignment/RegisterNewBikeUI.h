#ifndef REGISTER_NEW_BIKE_U_I_H
#define REGISTER_NEW_BIKE_U_I_H

#include <fstream>
#include <string>

using namespace std;

class RegisterNewBike;

class RegisterNewBikeUI
{
private:
	RegisterNewBike* registerNewBikeRef;

	ofstream* out_fp;

	ifstream* in_fp;

public:
	void enterRegisterNewBikeInfo();

	void showRegisterNewBikeMessage(string bikeId, string bikeName);

	void readInputFile();

	RegisterNewBikeUI(RegisterNewBike* registerNewBikeRef, ofstream* out_fp, ifstream* in_fp);
};
#endif
