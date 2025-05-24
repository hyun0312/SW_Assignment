// 헤더 파일
#include "RegisterNewBikeUI.h"
#include "RegisterNewBike.h"

/*
	함수 이름 : RegisterNewBikeUI::RegisterNewBikeUI
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : RegisterNewBike reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
RegisterNewBikeUI::RegisterNewBikeUI(RegisterNewBike* registerNewBikeRef, ofstream* out_fp, ifstream* in_fp)
{
	this->registerNewBikeRef = registerNewBikeRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : RegisterNewBikeUI::readInputFile
	기능	  : enterRegisterNewBikeInfo 함수를 호출한다 (이 과제에서 actor의 행동을 input 파일로 대체하기 때문에 함수를 호출하는 역할만 수행한다)
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterNewBikeUI::readInputFile()
{
	enterRegisterNewBikeInfo();
}

/*
	함수 이름 : RegisterNewBikeUI::enterRegisterNewBikeInfo
	기능	  : input.txt에서 bikeId, bikeName 정보를 읽어오고 RegisterNewBike가 자전거 등록을 하도록 요청한다
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterNewBikeUI::enterRegisterNewBikeInfo()
{
	string bikeId, bikeName;										// input.txt에서 읽어올 정보
	*in_fp >> bikeId >> bikeName;									// input.txt에서 정보 읽어오기
	registerNewBikeRef->requestRegisterNewBike(bikeId, bikeName);	// RegisterNewBike가 읽어온 정보를 통해 자전거 등록을 하도록 요청한다
}

/*
	함수 이름 : RegisterNewBikeUI::showRegisterNewBikeMessage
	기능	  : 자전거 등록 완료 메세지를 보여준다
	전달 인자 : bikeId, bikeName -> 자전거 등록 완료 메세지를 보여주기 위해 필요한 정보
	반환값    : 없음
*/
void RegisterNewBikeUI::showRegisterNewBikeMessage(string bikeId, string bikeName)
{
	*out_fp << "3.1. 자전거 등록\n" << "> " << bikeId << " " << bikeName << endl;
	*out_fp << endl;
}