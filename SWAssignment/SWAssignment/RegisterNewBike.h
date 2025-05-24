#ifndef REGISTER_NEW_BIKE_H
#define REGISTER_NEW_BIKE_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class RegisterNewBikeUI;
class BikeDB;

// 자전거 등록을 위한 RegisterNewBike control class 정의
class RegisterNewBike
{
private:
	RegisterNewBikeUI* registerNewBikeUIRef;	// boundary class reference
	BikeDB* bikeDBRef;							// BikeDB reference
	ofstream* out_fp;							// output.txt reference
	ifstream* in_fp;							// input.txt reference

public:
	RegisterNewBike(BikeDB* bikeDBRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void registerNewBikeStart();											// main에서 자전거 등록을 실행시킨다
	void requestRegisterNewBike(string bikeId, string bikeName);			// 자전거 등록시 필요한 정보를 통해 자전거 등록을 요청한다
};
#endif
