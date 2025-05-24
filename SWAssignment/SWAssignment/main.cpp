// ��� ����
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

// ��� ����
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();

// ���� ����
ofstream out_fp;
ifstream in_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);
    // ���� ������ �뿩 �ý��� ���� �Լ�
    doTask();
    // ���� �ݱ�
    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    // �ý��� ���Ḧ ���� ����
    int is_program_exit = 0;
    // main���� ���� �����ؾ� �ϴ� ��ü
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
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ������"
                signUp->signUpStart();
                break;
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:   // "2.1. �α���"
                signIn->signInStart();
                break;
            case 2:   // "2.2. �α׾ƿ�"
                signOut->signOutStart();
                break;
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:   // "3.1. ������ ���"
                registerNewBike->registerNewBikeStart();
                break;
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:   // "4.1. ������ �뿩"
                bikeRent->bikeRentStart();
                break;
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:   // "5.1. �뿩 ���� ��ȸ"
                showBikeRent->showBikeRentStart();
                break;
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ����"
                out_fp << "6.1. ����";
                is_program_exit = 1;
                break;
            }
            break;
        }
        }
    }
}
