#include <iostream>
#include <string>
#include <stack>
using namespace std;

// 스택은 입구가 한쪽 끝에서만 자료를 넣고 뺄 수 있는 자료구조이다.
// 마지막으로 넣은 것이 가장 먼저 나오는 LIFO
struct Stack {
	int data[10000];
	int size; 
	// 스택의 크기 
	// size = 5 0~4 번째 

	Stack() {
		size = 0;
	}
	
	// push = 들어온 데이터 값을 추가 
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
	// pop = 제일 나중에 들어온 것 제거 (FO)

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

