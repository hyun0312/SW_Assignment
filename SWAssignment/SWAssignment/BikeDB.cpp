// 헤더 선언
#include "BikeDB.h"
#include "BikeInfo.h"

// 기본 생성자
BikeDB::BikeDB()
{

}

/*
	함수 이름 : BikeDB::addNewBike
	기능	  : bikeId, bikeName을 받아와서 새로운 BikeInfo 객체를 만들고 그 정보를 bikeInfo 리스트에 저장한다
	전달 인자 : bikeId, bikeName -> 새로운 자전거를 만들때 필요한 정보
	반환값    : 없음
*/
void BikeDB::addNewBike(string bikeId, string bikeName)
{
	bikeInfo[numBikes++] = new BikeInfo(bikeId, bikeName);	// 새로운 BikeInfo 객체를 만들고 그 정보를 bikeInfo 리스트에 저장한다
}

/*
	함수 이름 : BikeDB::getBikeInfo
	기능	  : isBikeInfo 함수로 해당 bikeInfo 리스트에 유저 정보가 있으면 해당 bikeInfo를 반환한다
	전달 인자 : bikeId -> 저장되어 있는 자전거중에 해당 bikeId를 갖는 자전거가 존재하는지 확인한다
	반환값    : bikeInfo 리스트에 저장된 BikeInfo* type 반환
*/
BikeInfo* BikeDB::getBikeInfo(string bikeId)
{
	for (int i = 0; i < numBikes; i++) {		// 저장된 자전거 수만큼 for문을 돌리면서
		if (bikeInfo[i]->isBikeInfo(bikeId)) {	// bikeInfo에 해당 bikeId를 갖는 자전거가 있으면
			return bikeInfo[i];					// 해당 bikeInfo[i]를 반환한다
		}
	}
}