#include <iostream>
#include <time.h>
using namespace std;


int main(void) {
	int Max = 100;
	int iNum[45] = {};
	for (int i = 0; i < 45; i++) {
		iNum[i] = i + 1;

	}
	// 1부터 45까지 넣는거.. 

	srand((unsigned int)time(0)); // 


	// 여기서 생각해야하는 것 중복을 제거해야 합니다.

	int temp, index1, index2;

	for (int i = 0; i < Max; i++) {
		index1 = rand() % 45;
		index2 = rand() % 45;

		temp = iNum[index1];
		iNum[index1] = iNum[index2];
		iNum[index2] = temp;

	}

	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << "번째 번호 : " << iNum[i] << endl;

	}
	cout << "보너스 번호 : " << iNum[5] << endl;


	return 0;
}