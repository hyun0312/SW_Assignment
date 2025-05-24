#ifndef BIKE_RENT_U_I_H
#define BIKE_RENT_U_I_H
// 헤더 선언
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class BikeRent;

// 자전거 대여를 위한 BikeRentUI boundary class 정의
class BikeRentUI
{
private:
	BikeRent* bikeRentRef;	// control class reference
	ofstream* out_fp;		// output.txt refernece
	ifstream* in_fp;		// input.txt reference

public:
	BikeRentUI(BikeRent* bikeRentRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void readInputFile();													// 원래는 유저가 정보를 입력하도록 UI를 보여주기 위한 함수지만 이 과제에서는 입력을 파일로 대체한다
	void enterBikeRentInfo();												// 원래는 유저가 정보를 입력하기 위한 함수지만 이 과제에서는 파일에서 읽어온다
	void showBikeRentMessage(string bikeId, string bikeName);				// 자전거 대여 완료 메세지를 보여준다
};
#endif
