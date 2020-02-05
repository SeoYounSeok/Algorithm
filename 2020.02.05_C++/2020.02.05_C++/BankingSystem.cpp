#include <iostream>
#include <cstring>
#define MAX 20;
using namespace std;

const int NAME_LAN = 20;

// �Է� �޾ƾ� �Ǵ� ���� 5��
// 3�� ��� ���� id , �̸� , �ܾ� 

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
	case ShowA :
		ShowAllAccInfo();
		break;
	case EXIT : 
		return 0;
	default:
		cout << "��ȣ�� �ٽ� �Է����ּ���" << endl;
		break;
	}
	}
	return 0;
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1 . ���°輳" << endl;
	cout << "2 . �� ��" << endl;
	cout << "3 . �� ��" << endl;
	cout << "4 . �������� ��ü ���" << endl;
	cout << "5 . ���α׷� ����" << endl;
}
// �ּ� �߰� ++

void MakeAccount(void) {
	cout << "[ ���°��� ]" << endl;
	cout << " ����ID : ";
	cin >> accArr[accNum].user_id;
	/*cout << endl;*/
	cout << " �� �� : ";
	cin >> accArr[accNum].name;
	/*cout << endl;*/
	cout << " �Աݾ� : ";
	cin >> accArr[accNum].balance;
	cout << endl;
	accNum++;
}

void WithdrawMoney() {
	int W_id;
	int balance;

	cout << " [ ��   �� ] " << endl;
	cout << "����ID : ";
	cin >> W_id;
	cout << "��ݾ� : ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].user_id == W_id) {
			if (accArr[i].balance < balance) {
				cout << "�ܾ׺���" << endl;
				return;
			}
			accArr[i].balance -= balance;
			cout << " ��ݿϷ� " << endl;
			return;
		}
	}

}

void DepositMoney() {
	int D_id;
	int balance;

	cout << " [ ��   �� ] " << endl;
	cout << "����ID : ";
	cin >> D_id;
	cout << "�Աݾ� : ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].user_id == D_id) {
			accArr[i].balance += balance;
			cout << " �ԱݿϷ� " << endl;
			return;
		}
	}
	
};

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "����ID : " << accArr[i].user_id << endl;
		cout << "�� �� : " << accArr[i].name << endl;
		cout << "�� �� : " << accArr[i].balance << endl;

	}
}