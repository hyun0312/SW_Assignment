#ifndef BIKE_RENT_H
#define BIKE_RENT_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class BikeRentUI;
class BikeDB;
class Session;
class RentDB;
class BikeInfo;

// 자전거 대여를 위한 BikeRent control class 정의
class BikeRent
{
private:
	BikeRentUI* bikeRentUIRef;	// control class reference
	BikeDB* bikeDBRef;			// BikeDB reference
	Session* sessionRef;		// Session reference
	RentDB* rentDBRef;			// RentDB reference
	ofstream* out_fp;			// output.txt reference
	ifstream* in_fp;			// input.txt reference

public:
	BikeRent(BikeDB* bikeDBRef, RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void bikeRentStart();																					// main에서 자전거 대여를 실행시킨다
	void requestBikeRent(string bikeId);																	// 자전거 대여시 필요한 정보를 통해 자전거 대여를 요청한다
};
#endif
