//스택은 기본적으로 한쪽에서만 자료를 넣고 뺄수 잇는 자료이다.
//- 한쪽 끝에서만 자료를 넣고 뺄수 있는 자료구조
//- 마지막으로 넣은 것이 먼저 나오기 때문에 LIFO 라고도 한다.
//- push : 스택에 자료를 넣는 연산
//- pop : 스택에서 자료를 빼는 연산
//- top : 스택의 가장 위에 있는 자료를 보는 연산
//- empty : 스택이 비어있는지 아닌지를 알아보는 연산
//- size : 스택에 저장되어있는 자료의 개수를 알아보는 연산

//문제 10828번
//push X : 정수 X를 스택에 넣는 연산이다.
//pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//size : 스택에 들어있는 정수의 개수를 출력한다.
//empty : 스택이 비어있으면 1 아니면 0을 출력한다.
//top : 스택에 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없으면 -1을 출력한다.


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
