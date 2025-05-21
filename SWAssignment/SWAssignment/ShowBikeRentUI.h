#ifndef SHOW_BIKE_RENT_U_I_H
#define SHOW_BIKE_RENT_U_I_H

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class ShowBikeRent;

class ShowBikeRentUI
{
private:
	ShowBikeRent* showBikeRentRef;

	ofstream* out_fp;

public:
	void showBikeRentList(vector<pair<string, string>> rentLists);

	void readInputFile();

	ShowBikeRentUI(ShowBikeRent* showBikeRentRef, ofstream* out_fp);
};
#endif
