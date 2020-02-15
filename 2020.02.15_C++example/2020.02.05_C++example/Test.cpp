// 기초부터 차근차근하게 D-15

#include <iostream>
using namespace std;

void add(int* x1, int* x2, int ad);

int main(void)
{
	// 예제 1번
	int a;
	int* b = &a;

	cout << "a의 주소값은" << &a << "입니다"<<endl;
	cout << "a의 주소값은" << b << "입니다";
	// 예제 2번
	
	int num1 = 0;
	int num2 = 0;
	int ad = 0;

	cout << " 두 변수의 값을 입력해주세요.";
	cin >> num1 >> num2;
	cout << " 더할 점수를 입력해주세요" << endl;
	cin >> ad;
	cout << endl;

	add(&num1, &num2, ad);

	cout << num1 << num2 << "이렇게 나옴!" << endl;

	return 0;
}


void add(int* x1, int* x2, int a) {

	*x1 += a;
	*x2 += a;

}