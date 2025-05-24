// 헤더 선언
#include "RentDB.h"
#include "BikeInfo.h"

// 기본 생성자
RentDB::RentDB()
{

}

/*
	함수 이름 : RentDB::addRentBike
	기능	  : userId를 키로 하고 대여한 자전거의 BikeInfo 포인터들의 리스트로 dictionary를 만들어서 저장한다
	전달 인자 : userId, BikeInfo reference -> rentLists dictionary에 저장하기 위한 정보
	반환값    : 없음
*/
void RentDB::addRentBike(string userId, BikeInfo* bikeInfo)
{
	vector<BikeInfo*> currentBikeInfoList;			// 대여한 자전거의 BikeInfo 포인터들을 저장할 리스트
	if (rentLists[userId].empty()) {				// rentLists dictionary에 userId를 키로한 정보가 없을 때
		rentLists[userId] = { bikeInfo };			// userId를 키로하고 해당 BikeInfo 포인터를 value로 하는 dictionary 저장
	}
	else {											// rentLists dictionary에 userId를 키로한 정보가 있을 때
		currentBikeInfoList = rentLists[userId];	// currentBikeInfoList에 저장되어 있는 value값들의 리스트를 가져오고
		currentBikeInfoList.push_back(bikeInfo);	// 해당 리스트에 BikeInfo 포인터를 추가하고
		rentLists[userId] = currentBikeInfoList;	// rentLists dictionary에 다시 저장한다
	}
}

/*
	함수 이름 : RentDB::getBikeRentInfo
	기능	  : 현재 로그인한 유저의 UserInfo에 접근해 id를 반환한다
	전달 인자 : userId -> 해당 userId를 키값으로 한 value값을 반환하기 위한 정보
	반환값    : rentBikeInfoDetails에 대여한 자전거의 bikeId와 bikeName 쌍으로 이루어진 vector 반환
*/
vector<pair<string, string>> RentDB::getBikeRentInfo(string userId)
{
	vector<BikeInfo*> rentBikeInfo = rentLists[userId];					// rentBikeInfo vector에 userId를 키값으로 하는 value값 저장
	vector<pair<string, string>> rentBikeInfoDetails;					// 반환할 rentBikeInfoDetails vector 선언
	for (int i = 0; i < rentBikeInfo.size(); i++) {						// 저장된 rentBikeInfo의 개수만큼 반복
		rentBikeInfoDetails.push_back(rentBikeInfo[i]->getBikeInfo());	// 해당 rentBikeInfo[i]의 bikeId와 bikeName을 rentBikeInfoDetails에 저장
	}
	sort(rentBikeInfoDetails.begin(), rentBikeInfoDetails.end());		// bikeId순으로 vector를 정렬시키고
	return rentBikeInfoDetails;											// vector를 반환한다
}