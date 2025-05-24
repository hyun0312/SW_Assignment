#ifndef BIKE_D_B_H
#define BIKE_D_B_H
// 헤더 선언
#include <string>

using namespace std;
// 클래스 선언
class BikeInfo;

// 자전거 정보 저장을 위한 BikeDB entity class 정의
class BikeDB
{
private:
	BikeInfo* bikeInfo[50];	// BikeInfo 포인터를 저장하고 있는 리스트
	int numBikes = 0;		// 현재 등록되어 있는 자전거 수

public:
	BikeDB();											// 생성자
	void addNewBike(string bikeId, string bikeName);	// 새로운 자전거 객체를 생성해 bikeInfo에 저장한다
	BikeInfo* getBikeInfo(string bikeId);				// 해당 bikeId를 갖는 BikeInfo 객체 포인터를 반환한다
};
#endif
