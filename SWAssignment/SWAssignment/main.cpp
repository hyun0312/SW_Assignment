// 헤더 선언
#include <fstream>
#include "Signup.h"
#include "SignIn.h"
#include "SignOut.h"
#include "RegisterNewBike.h"
#include "BikeRent.h"
#include "ShowBikeRent.h"
#include "UserDB.h"
#include "BikeDB.h"
#include "RentDB.h"
#include "Session.h"

using namespace std;

// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();

// 변수 선언
ofstream out_fp;
ifstream in_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);
    // 실제 자전거 대여 시스템 동작 함수
    doTask();
    // 파일 닫기
    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    // 시스템 종료를 위한 변수
    int is_program_exit = 0;
    // main에서 직접 생성해야 하는 객체
    UserDB* userDb = new UserDB();
    BikeDB* bikeDb = new BikeDB();
    RentDB* rentDb = new RentDB();
    Session* session = new Session();
    SignUp* signUp = new SignUp(userDb, &out_fp, &in_fp);
    SignIn* signIn = new SignIn(userDb, session, &out_fp, &in_fp);
    SignOut* signOut = new SignOut(session, &out_fp);
    RegisterNewBike* registerNewBike = new RegisterNewBike(bikeDb, &out_fp, &in_fp);
    BikeRent* bikeRent = new BikeRent(bikeDb, rentDb, session, &out_fp, &in_fp);
    ShowBikeRent* showBikeRent = new ShowBikeRent(rentDb, session, &out_fp);



    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입"
                signUp->signUpStart();
                break;
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:   // "2.1. 로그인"
                signIn->signInStart();
                break;
            case 2:   // "2.2. 로그아웃"
                signOut->signOutStart();
                break;
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:   // "3.1. 자전거 등록"
                registerNewBike->registerNewBikeStart();
                break;
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:   // "4.1. 자전거 대여"
                bikeRent->bikeRentStart();
                break;
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:   // "5.1. 대여 정보 조회"
                showBikeRent->showBikeRentStart();
                break;
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료"
                out_fp << "6.1. 종료";
                is_program_exit = 1;
                break;
            }
            break;
        }
        }
    }
}
