#include <iostream>
using namespace std;

int Factorial(int n);



int main(void){
	int num;
	cout << "����� ���� �Է����ּ���";
	cin >> num;
	cout << Factorial(num);

	return 0;

}

int Factorial(int n) {

	int result=1;

	for (int i = 1; i < n+1; i++) {
		result *= i;

	}
	return result;
}