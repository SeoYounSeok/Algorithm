#include <iostream>
#include <cstring>
#define MAX 20;
using namespace std;

const int NAME_LAN = 20;

// �Է� �޾ƾ� �Ǵ� ���� 5��
// 3�� ��� ���� id , �̸� , �ܾ� 

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
	cout << "���� : ";
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
		cout << "��ȣ�� �ٽ� �Է����ּ���" << endl;
		break;
	}

	}
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1 . ���°輳" << endl;
	cout << "2 . �� ��" << endl;
	cout << "3 . �� ��" << endl;
	cout << "4 . �������� ��ü ���" << endl;
	cout << "5 . ���α׷� ����" << endl;
}