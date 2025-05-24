// 헤더 선언
#include "BikeRent.h"
#include "BikeRentUI.h"
#include "BikeDB.h"
#include "Session.h"
#include "RentDB.h"
#include "BikeInfo.h"

/*
	함수 이름 : BikeRent::BikeRent
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : BikeDB reference, RentDB reference, Session reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
BikeRent::BikeRent(BikeDB* bikeDBRef, RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeDBRef = bikeDBRef;
	this->rentDBRef = rentDBRef;
	this->sessionRef = sessionRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : BikeRent::bikeRentStart
	기능	  : main에서 자전거 대여를 실행시키기 위한 함수로 BikeRentUI boundary class 객체를 생성하고 BikeRentUI가 파일을 읽게 시킨다
	전달 인자 : 없음
	반환값    : 없음
*/
void BikeRent::bikeRentStart()
{
	bikeRentUIRef = new BikeRentUI(this, out_fp, in_fp);	// bikeRentUIRef에 BikeRentUI 객체 reference 저장
	bikeRentUIRef->readInputFile();							// BikeRentUI가 파일을 읽도록 한다
}

/*
	함수 이름 : BikeRent::requestBikeRent
	기능	  : BikeRentUI에서 BikeRent에게 자전거 대여시 필요한 정보를 가지고 자전거 대여 하도록 요청한다
	전달 인자 : id, password, phone -> 자전거 대여시 필요한 정보
	반환값    : 없음
*/
void BikeRent::requestBikeRent(string bikeId)
{
	BikeInfo* bikeInfo = bikeDBRef->getBikeInfo(bikeId);				// bikeInfo라는 포인터 변수에 BikeDB에 대여할 자전거를 저장한다
	pair<string, string> bikeInfoDetails = bikeInfo->getBikeInfo();		// bikeInfoDetails라는 페어에 BikeInfo로부터 자전거 정보를 가져와서 저장한다
	string userId = sessionRef->getCurrentUserId();						// userId에 현재 로그인한 유저의 id를 저장한다
	rentDBRef->addRentBike(userId, bikeInfo);							// RentDB에 현재 로그인한 유저의 id와 자전거 정보를 저장시키도록 한다
	bikeRentUIRef->showBikeRentMessage(bikeId, bikeInfoDetails.second);	// BikeRentUI에 자전거 대여 정보를 넘겨주면서 자전거 대여 완료 메세지를 보여주도록 한다
}