#include <iostream>
using namespace std;

int main(void) {
	
	
	int test[5] = { 90,80,70,60,50 };

	cout << test[0] << endl; // 90
	cout << &test[0] << endl; // �ּ� ��
	cout << test << endl; // �ּ� ��
	cout << test+1 << endl; // �ּ� �� + 4
	cout << *(test + 1) << endl; // 80

	return 0;


	// strcpy ���ڿ� ���̱� 
}