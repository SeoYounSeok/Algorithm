/*
�򰥸��� ��Ʈ
��ȯ���� �������� ��� ����2
text ���Ͽ��� ���� �ٷ絵�� �ϰڽ��ϴ�.
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

