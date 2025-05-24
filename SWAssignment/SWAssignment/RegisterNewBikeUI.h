#ifndef REGISTER_NEW_BIKE_U_I_H
#define REGISTER_NEW_BIKE_U_I_H
// 헤더 선언
#include <fstream>
#include <string>

using namespace std;
// 클래스 선언
class RegisterNewBike;

// 자전거 등록을 위한 RegisterNewBikeUI boundary class 정의
class RegisterNewBikeUI
{
private:
	RegisterNewBike* registerNewBikeRef;	// control class reference
	ofstream* out_fp;						// output.txt reference
	ifstream* in_fp;						// input.txt refererence

public:
	RegisterNewBikeUI(RegisterNewBike* registerNewBikeRef, ofstream* out_fp, ifstream* in_fp);	// 생성자
	void readInputFile();																		// 원래는 유저가 정보를 입력하도록 UI를 보여주기 위한 함수지만 이 과제에서는 입력을 파일로 대체한다
	void enterRegisterNewBikeInfo();															// 원래는 유저가 정보를 입력하기 위한 함수지만 이 과제에서는 파일에서 읽어온다
	void showRegisterNewBikeMessage(string bikeId, string bikeName);							// 자전거 등록 완료 메세지를 보여준다
};
#endif
