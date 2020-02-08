//������ �⺻������ ���ʿ����� �ڷḦ �ְ� ���� �մ� �ڷ��̴�.
//- ���� �������� �ڷḦ �ְ� ���� �ִ� �ڷᱸ��
//- ���������� ���� ���� ���� ������ ������ LIFO ��� �Ѵ�.
//- push : ���ÿ� �ڷḦ �ִ� ����
//- pop : ���ÿ��� �ڷḦ ���� ����
//- top : ������ ���� ���� �ִ� �ڷḦ ���� ����
//- empty : ������ ����ִ��� �ƴ����� �˾ƺ��� ����
//- size : ���ÿ� ����Ǿ��ִ� �ڷ��� ������ �˾ƺ��� ����

//���� 10828��
//push X : ���� X�� ���ÿ� �ִ� �����̴�.
//pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//empty : ������ ��������� 1 �ƴϸ� 0�� ����Ѵ�.
//top : ���ÿ� ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ������ -1�� ����Ѵ�.


#include <iostream>
#include <stack>
#include <string>
using namespace std;

const int Max_Lan = 10000;


struct Stack
{
	int data[Max_Lan];
	int size;
	Stack() {
		size = 0;
	}
	void push(int num) {
		data[size] = num;
		size += 1;
	 }
	bool empty() {
		if (size == 0) {
			return true;
		}
		else{
			return false;
		}
	}
	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			size -= 1;
			return data[size];
		}
	}
	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return data[size-1];
		}
	}
};


int main() {
	int n;
	cin >> n;
	Stack s;

	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "top") {
			cout << (s.empty() ? -1 : s.top()) << endl;
		}
		else if (cmd == "size") {
			cout << s.size << endl;
		}
		else if (cmd == "empty") {
			cout << s.empty() << endl;
		}
		else if (cmd == "pop") {
			cout << (s.empty() ? -1 : s.top()) << endl;
			if (!s.empty()) {
				s.pop();
			}
		}
	}
	return 0;
}
