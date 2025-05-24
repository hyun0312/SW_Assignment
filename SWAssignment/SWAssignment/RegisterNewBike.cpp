// 헤더 선언
#include "RegisterNewBike.h"
#include "RegisterNewBikeUI.h"
#include "BikeDB.h"

/*
	함수 이름 : RegisterNewBike::RegisterNewBike
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : BikeDB reference, output.txt reference, input.txt reference
	반환값    : 없음
*/
RegisterNewBike::RegisterNewBike(BikeDB * bikeDBRef, ofstream* out_fp, ifstream* in_fp)
{
	this->bikeDBRef = bikeDBRef;
	this->out_fp = out_fp;
	this->in_fp = in_fp;
}

/*
	함수 이름 : RegisterNewBike::registerNewBikeStart
	기능	  : main에서 회원 가입을 실행시키기 위한 함수로 RegisterNewBikeUI boundary class 객체를 생성하고 RegisterNewBikeUI가 파일을 읽게 시킨다
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterNewBike::registerNewBikeStart()
{
	registerNewBikeUIRef = new RegisterNewBikeUI(this, out_fp, in_fp);	// registerNewBikeUIRef에 registerNewBikeUI 객체 reference 저장
	registerNewBikeUIRef->readInputFile();								// registerNewBikeUI가 파일을 읽도록 한다
}

/*
	함수 이름 : RegisterNewBike::requestRegisterNewBike
	기능	  : RegisterNewBikeUI에서 RegisterNewBike에게 자전거 등록시 필요한 정보를 가지고 자전거 등록 하도록 요청한다
	전달 인자 : bikeId, bikeName -> 자전거 등록시 필요한 정보
	반환값    : 없음
*/
void RegisterNewBike::requestRegisterNewBike(string bikeId, string bikeName)
{
	bikeDBRef->addNewBike(bikeId, bikeName);							// BikeDB에 자전거 등록 정보를 넘겨주면서 새로운 자전거를 저장시키도록 한다
	registerNewBikeUIRef->showRegisterNewBikeMessage(bikeId, bikeName);	// RegisterNewBikeUI에 자전거 등록 정보를 넘겨주면서 자전거 등록 완료 메세지를 보여주도록 한다
}