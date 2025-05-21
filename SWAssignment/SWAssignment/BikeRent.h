#ifndef BIKE_RENT_H
#define BIKE_RENT_H

#include <string>
#include <fstream>

using namespace std;

class BikeRentUI;
class BikeDB;
class Session;
class RentDB;
class BikeInfo;

class BikeRent
{
private:
	BikeRentUI* bikeRentUIRef;

	BikeDB* bikeDBRef;

	Session* sessionRef;

	RentDB* rentDBRef;

	ofstream* out_fp;
	
	ifstream* in_fp;

public:
	void requestBikeRent(string bikeId);

	void bikeRentStart();

	BikeRent(BikeDB* bikeDBRef, RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp);
};
#endif
