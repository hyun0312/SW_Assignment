// 헤더 선언
#include "BikeRentUI.h"
#include "BikeRent.h"

/*
	함수 이름 : BikeRentUI::BikeRentUI
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : BikeRent reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
BikeRentUI::BikeRentUI(BikeRent* bikeRentRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeRentRef = bikeRentRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : BikeRentUI::readInputFile
	기능	  : enterBikeRentInfo 함수를 호출한다 (이 과제에서 actor의 행동을 input 파일로 대체하기 때문에 함수를 호출하는 역할만 수행한다)
	전달 인자 : 없음
	반환값    : 없음
*/
void BikeRentUI::readInputFile()
{
	enterBikeRentInfo();
}

/*
	함수 이름 : BikeRentUI::enterBikeRentInfo
	기능	  : input.txt에서 bikeId 정보를 읽어오고 BikeRent가 자전거 대여를 하도록 요청한다
	전달 인자 : 없음
	반환값    : 없음
*/
void BikeRentUI::enterBikeRentInfo()
{
	string bikeId;							// input.txt에서 읽어올 정보
	*in_fp >> bikeId;						// input.txt에서 정보 읽어오기
	bikeRentRef->requestBikeRent(bikeId);	// BikeRent가 읽어온 정보를 통해 자전거 대여를 하도록 요청한다
}

/*
	함수 이름 : BikeRentUI::showBikeRentMessage
	기능	  : 자전거 대여 완료 메세지를 보여준다
	전달 인자 : bikeId, bikeName -> 자전거 대여 완료 메세지를 보여주기 위해 필요한 정보
	반환값    : 없음
*/
void BikeRentUI::showBikeRentMessage(string bikeId, string bikeName)
{
	*out_fp << "4.1. 자전거 대여" << endl;
	*out_fp << "> " << bikeId << " " << bikeName << endl;
	*out_fp << endl;
}