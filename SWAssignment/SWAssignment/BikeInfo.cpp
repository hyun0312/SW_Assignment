// 헤더 선언
#include "BikeInfo.h"

/*
	함수 이름 : BikeInfo::BikeInfo
	기능	  : 자전거 bikeId, bikeName 정보를 저장한다
	전달 인자 : bikeId, bikeName -> 자전거의 정보를 저장하기 위한 정보
	반환값    : 없음
*/
BikeInfo::BikeInfo(string bikeId, string bikeName)
{
	this->bikeId = bikeId;
	this->bikeName = bikeName;
}

/*
	함수 이름 : BikeInfo::isBikeInfo
	기능	  : bikeId를 받아와서 저장되어 있는 bikeId와 비교해 일치하면 true를 반환한다
	전달 인자 : bikeId -> 저장되어 있는 bikeId와 비교하기 위해 필요한 정보
	반환값    : 일치하면 true, 일치하지 않으면 false
*/
bool BikeInfo::isBikeInfo(string bikeId)
{
	if (this->bikeId == bikeId) {
		return true;
	}
	else {
		return false;
	}
}

/*
	함수 이름 : BikeInfo::getBikeInfo
	기능	  : 현재 저장되어 있는 bikeId와 bikeName을 반환한다
	전달 인자 : 없음
	반환값    : 저장되어 있는 bikeId와 bikeName
*/
pair<string, string> BikeInfo::getBikeInfo()
{
	return make_pair(bikeId, bikeName);
}
