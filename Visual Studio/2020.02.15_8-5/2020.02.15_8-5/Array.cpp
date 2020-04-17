#include <iostream>
using namespace std;

int main(void) {
	
	
	int test[5] = { 90,80,70,60,50 };

	cout << test[0] << endl; // 90
	cout << &test[0] << endl; // 주소 값
	cout << test << endl; // 주소 값
	cout << test+1 << endl; // 주소 값 + 4
	cout << *(test + 1) << endl; // 80

	return 0;


	// strcpy 문자열 붙이기 
}