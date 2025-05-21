#include "ShowBikeRent.h"
#include "ShowBikeRentUI.h"
#include "RentDB.h"
#include "Session.h"

void ShowBikeRent::requestShowBikeRentList()
{
	string userId = sessionRef->getCurrentUserId();
	vector<pair<string, string>> rentLists = rentDBRef->getBikeRentInfo(userId);
	showBikeRentUIRef->showBikeRentList(rentLists);
}

void ShowBikeRent::showBikeRentStart()
{
	showBikeRentUIRef = new ShowBikeRentUI(this, out_fp);
	showBikeRentUIRef->readInputFile();
}

ShowBikeRent::ShowBikeRent(RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp)
{
	this->rentDBRef = rentDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
}
