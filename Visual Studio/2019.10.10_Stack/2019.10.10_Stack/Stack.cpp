#include <iostream>
#include <string>
#include <stack>
using namespace std;

// ������ �Ա��� ���� �������� �ڷḦ �ְ� �� �� �ִ� �ڷᱸ���̴�.
// ���������� ���� ���� ���� ���� ������ LIFO
struct Stack {
	int data[10000];
	int size; 
	// ������ ũ�� 
	// size = 5 0~4 ��° 

	Stack() {
		size = 0;
	}
	
	// push = ���� ������ ���� �߰� 
	void push(int num) {
		data[size] = num;
		size += 1;
	}

	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	// pop = ���� ���߿� ���� �� ���� (FO)

	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			size -= 1;
			return data[size];
		}
	}
};

