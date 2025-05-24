#ifndef SHOW_BIKE_RENT_U_I_H
#define SHOW_BIKE_RENT_U_I_H
// 헤더 선언
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// 클래스 선언
class ShowBikeRent;

// 자전거 대여 정보 출력을 위한 ShowBikeRentUI boundary class 정의
class ShowBikeRentUI
{
private:
	ShowBikeRent* showBikeRentRef;	// control class reference
	ofstream* out_fp;				// output.txt reference

public:
	ShowBikeRentUI(ShowBikeRent* showBikeRentRef, ofstream* out_fp);	// 생성자
	void readInputFile();												// 원래는 유저가 정보를 입력하도록 UI를 보여주기 위한 함수지만 이 과제에서는 입력을 파일로 대체한다
	void showBikeRentList(vector<pair<string, string>> rentLists);		// 자전거 대여 정보 리스트를 보여준다
};
#endif
