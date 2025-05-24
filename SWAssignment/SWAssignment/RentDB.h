#ifndef RENT_D_B_H
#define RENT_D_B_H
// 헤더 선언
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// 클래스 선언
class BikeInfo;

// 자전거 대여 정보를 저장하기 위한 RentDB entity class
class RentDB
{
private:
	BikeInfo* bikeInfoRef;						// BikeInfo reference
	map<string, vector<BikeInfo*>> rentLists;	// 유저가 대여한 자전거 리스트

public:
	RentDB();														// 생성자
	void addRentBike(string userId, BikeInfo* bikeInfo);			// userId와 BikeInfo의 포인터를 dictionary에 저장한다
	vector<pair<string, string>> getBikeRentInfo(string userId);	// userId를 통해 유저가 대여한 자전거 정보를 vector로 반환한다
};
#endif
