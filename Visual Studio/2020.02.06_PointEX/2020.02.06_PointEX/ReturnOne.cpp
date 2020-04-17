/*
헷갈리는 파트
반환형이 참조형인 경우 예제2
text 파일에서 따로 다루도록 하겠습니다.
*/

#include <iostream>
using namespace std;

int& ReturnOne(int &ref) {
	ref++;
	return ref;
}

int main(void) {
	int num = 1;
	int &num2 = ReturnOne(num);

	num += 1;
	num2 += 100;

	cout << "num : " << num << endl;
	cout << "num2 : " << num2 << endl;
	return 0;
}

