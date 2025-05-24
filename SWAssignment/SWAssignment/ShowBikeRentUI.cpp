// 헤더 선언
#include "ShowBikeRentUI.h"
#include "ShowBikeRent.h"

/*
	함수 이름 : ShowBikeRentUI::ShowBikeRentUI
	기능	  : 객체들의 reference를 private 변수에 각각 저장한다
	전달 인자 : ShowBikeRent reference, output.txt reference
	반환값    : 없음
*/
ShowBikeRentUI::ShowBikeRentUI(ShowBikeRent* showBikeRentRef, ofstream* out_fp)
{
	this->showBikeRentRef = showBikeRentRef;
	this->out_fp = out_fp;
}

/*
	함수 이름 : ShowBikeRentUI::readInputFile
	기능	  : ShowBikeRent의 requestShowBikeRentList 함수를 호출한다 (이 과제에서 자전거 대여 정보 출력 할 때 actor가 행동을 하지 않기 때문에 바로 requestShowBikeRentList 호출)
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowBikeRentUI::readInputFile()
{
	showBikeRentRef->requestShowBikeRentList();
}

/*
	함수 이름 : ShowBikeRentUI::showBikeRentList
	기능	  : 로그아웃 완료 메세지를 보여준다
	전달 인자 : rentLists -> 자전거 대여 리스트를 출력하기 위한 (자전거 id, 자전거 이름) 쌍들의 vector
	반환값    : 없음
*/
void ShowBikeRentUI::showBikeRentList(vector<pair<string, string>> rentLists)
{
	*out_fp << "5.1. 자전거 대여 리스트" << endl;
	for (int i = 0; i < rentLists.size(); i++) {
		*out_fp << "> " << rentLists[i].first << " " << rentLists[i].second << endl;
	}
	*out_fp << endl;
}