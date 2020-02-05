#include <iostream>
#include <cstring>
#define MAX 20;
using namespace std;

const int NAME_LAN = 20;

// 입력 받아야 되는 정보 5개
// 3개 등록 계좌 id , 이름 , 잔액 

typedef struct {
	
	int id;
	char name[NAME_LAN];
	int balance;

} Account;

Account accArr[100];
int accNu = 0;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum 
{
	Make = 1, Deposit, Withdraw, ShowA, EXIT
};


int main(void) {
	int choice;
	
	while(1) {

	ShowMenu();
	cout << "선택 : ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case Make:
		MakeAccount();
		break;
	case Deposit:
		DepositMoney();
		break;
	case Withdraw :
		WithdrawMoney();
		break;
	default:
		cout << "번호를 다시 입력해주세요" << endl;
		break;
	}

	}
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1 . 계좌계설" << endl;
	cout << "2 . 입 금" << endl;
	cout << "3 . 출 금" << endl;
	cout << "4 . 계좌정보 전체 출력" << endl;
	cout << "5 . 프로그램 종료" << endl;
}