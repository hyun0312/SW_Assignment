#ifndef REGISTER_NEW_BIKE_H
#define REGISTER_NEW_BIKE_H

#include <string>
#include <fstream>

using namespace std;

class RegisterNewBikeUI;
class BikeDB;

class RegisterNewBike
{
private:
	RegisterNewBikeUI* registerNewBikeUIRef;

	BikeDB* bikeDBRef;

	ofstream* out_fp;

	ifstream* in_fp;

public:
	void requestRegisterNewBike(string bikeId, string bikeName);
	void registerNewBikeStart();
	RegisterNewBike(BikeDB* bikeDBRef, ofstream* out_fp, ifstream* in_fp);

};
#endif
