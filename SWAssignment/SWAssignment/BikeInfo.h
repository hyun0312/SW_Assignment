#ifndef BIKE_INFO_H
#define BIKE_INFO_H
// 헤더 선언
#include <string>

using namespace std;

// 자전거의 정보를 가지고 있는 BikeInfo entity class
class BikeInfo
{
private:
	string bikeId;		// 자전거 id
	string bikeName;	// 자전거 이름

public:
	BikeInfo(string bikeId, string bikeName);	// 생성자
	bool isBikeInfo(string bikeId);				// 자전거 bikeId로 해당 자전거가 있는지 확인한다
	pair<string, string> getBikeInfo();			// 현재 저장되어 있는 자전거의 bikeId와 bikeName을 반환한다
};
#endif
