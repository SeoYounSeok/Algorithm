// ���ʺ��� ���������ϰ� D-15

#include <iostream>
using namespace std;

void add(int* x1, int* x2, int ad);

int main(void)
{
	// ���� 1��
	int a;
	int* b = &a;

	cout << "a�� �ּҰ���" << &a << "�Դϴ�"<<endl;
	cout << "a�� �ּҰ���" << b << "�Դϴ�";
	// ���� 2��
	
	int num1 = 0;
	int num2 = 0;
	int ad = 0;

	cout << " �� ������ ���� �Է����ּ���.";
	cin >> num1 >> num2;
	cout << " ���� ������ �Է����ּ���" << endl;
	cin >> ad;
	cout << endl;

	add(&num1, &num2, ad);

	cout << num1 << num2 << "�̷��� ����!" << endl;

	return 0;
}


void add(int* x1, int* x2, int a) {

	*x1 += a;
	*x2 += a;

}