#ifndef SHOW_BIKE_RENT_H
#define SHOW_BIKE_RENT_H

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class ShowBikeRentUI;
class RentDB;
class Session;

class ShowBikeRent
{
private:
	ShowBikeRentUI* showBikeRentUIRef;

	RentDB* rentDBRef;

	Session* sessionRef;

	ofstream* out_fp;

public:
	void requestShowBikeRentList();

	void showBikeRentStart();

	ShowBikeRent(RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp);
};
#endif
