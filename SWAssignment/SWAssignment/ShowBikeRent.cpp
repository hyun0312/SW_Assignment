// 헤더 선언
#include "ShowBikeRent.h"
#include "ShowBikeRentUI.h"
#include "RentDB.h"
#include "Session.h"

/*
	함수 이름 : ShowBikeRent::ShowBikeRent
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : RentDB reference, Session refernece, output.txt reference
	반환값    : 없음
*/
ShowBikeRent::ShowBikeRent(RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp)
{
	this->rentDBRef = rentDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
}

/*
	함수 이름 : ShowBikeRent::showBikeRentStart
	기능	  : main에서 자전거 대여 정보 출력을 실행시키기 위한 함수로 ShowBikeRentUI boundary class 객체를 생성하고 ShowBikeRentUI가 파일을 읽게 시킨다
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowBikeRent::showBikeRentStart()
{
	showBikeRentUIRef = new ShowBikeRentUI(this, out_fp);	// showBikeRentUIRef에 ShowBikeRentUI 객체 reference 저장
	showBikeRentUIRef->readInputFile();						// ShowBikeRent가 파일을 읽도록 한다
}

/*
	함수 이름 : ShowBikeRent::requestShowBikeRent
	기능	  : ShowBikeRentUI에서 ShowBikeRent에게 자전거 대여 정보 출력시 필요한 정보를 가지고 자전거 대여 정보 출력 하도록 요청한다
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowBikeRent::requestShowBikeRentList()
{
	string userId = sessionRef->getCurrentUserId();									// userId에 현재 로그인한 유저의 id를 저장한다
	vector<pair<string, string>> rentLists = rentDBRef->getBikeRentInfo(userId);	// rentLists에 RentDB로부터 해당 유저가 대여한 bikeId, bikeName을 가져와서 저장한다
	showBikeRentUIRef->showBikeRentList(rentLists);									// ShowBikeRentUI에 자전거 대여 정보 리스트를 넘겨주면서 자전거 대여 정보를 출력하도록 한다
}