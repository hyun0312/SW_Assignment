#ifndef SHOW_BIKE_RENT_H
#define SHOW_BIKE_RENT_H
// 헤더 선언
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class ShowBikeRentUI;
class RentDB;
class Session;

// 자전거 대여 정보 출력을 위한 ShowBikeRent control class 정의
class ShowBikeRent
{
private:
	ShowBikeRentUI* showBikeRentUIRef;	// control class reference
	RentDB* rentDBRef;					// RentDB reference
	Session* sessionRef;				// Session reference
	ofstream* out_fp;					// output.txt reference

public:
	ShowBikeRent(RentDB* rentDBRef, Session* sessionRef, ofstream* out_fp);	// 생성자
	void showBikeRentStart();												// main에서 자전거 대여 정보 출력을 실행시킨다
	void requestShowBikeRentList();											// 자전거 대여 정보 출력을 요청한다
};
#endif
