#include "ShowBikeRentUI.h"
#include "ShowBikeRent.h"

extern ofstream out_fp;

void ShowBikeRentUI::showBikeRentList(vector<pair<string, string>> rentLists)
{
	*out_fp << "5.1. 자전거 대여 리스트\n";
	for (int i = 0; i < rentLists.size(); i++) {
		*out_fp << "> " << rentLists[i].first << " " << rentLists[i].second << "\n\n";
	}
}

void ShowBikeRentUI::readInputFile()
{
	showBikeRentRef->requestShowBikeRentList();
}

ShowBikeRentUI::ShowBikeRentUI(ShowBikeRent* showBikeRentRef, ofstream* out_fp)
{
	this->showBikeRentRef = showBikeRentRef;
	this->out_fp = out_fp;
}
