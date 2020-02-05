#include <iostream>
#include <cstring>
#define MAX 20;
using namespace std;

const int NAME_LAN = 20;

// 입력 받아야 되는 정보 5개
// 3개 등록 계좌 id , 이름 , 잔액 

typedef struct {
	
	int user_id;
	char name[NAME_LAN];
	int balance;

} Account;

Account accArr[100];
int accNum = 0;

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
	case ShowA :
		ShowAllAccInfo();
		break;
	case EXIT : 
		return 0;
	default:
		cout << "번호를 다시 입력해주세요" << endl;
		break;
	}
	}
	return 0;
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1 . 계좌계설" << endl;
	cout << "2 . 입 금" << endl;
	cout << "3 . 출 금" << endl;
	cout << "4 . 계좌정보 전체 출력" << endl;
	cout << "5 . 프로그램 종료" << endl;
}
// 주석 추가 ++

void MakeAccount(void) {
	cout << "[ 계좌개설 ]" << endl;
	cout << " 계좌ID : ";
	cin >> accArr[accNum].user_id;
	/*cout << endl;*/
	cout << " 이 름 : ";
	cin >> accArr[accNum].name;
	/*cout << endl;*/
	cout << " 입금액 : ";
	cin >> accArr[accNum].balance;
	cout << endl;
	accNum++;
}

void WithdrawMoney() {
	int W_id;
	int balance;

	cout << " [ 출   금 ] " << endl;
	cout << "계좌ID : ";
	cin >> W_id;
	cout << "출금액 : ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].user_id == W_id) {
			if (accArr[i].balance < balance) {
				cout << "잔액부족" << endl;
				return;
			}
			accArr[i].balance -= balance;
			cout << " 출금완료 " << endl;
			return;
		}
	}

}

void DepositMoney() {
	int D_id;
	int balance;

	cout << " [ 입   금 ] " << endl;
	cout << "계좌ID : ";
	cin >> D_id;
	cout << "입금액 : ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].user_id == D_id) {
			accArr[i].balance += balance;
			cout << " 입금완료 " << endl;
			return;
		}
	}
	
};

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "계좌ID : " << accArr[i].user_id << endl;
		cout << "이 름 : " << accArr[i].name << endl;
		cout << "잔 액 : " << accArr[i].balance << endl;

	}
}