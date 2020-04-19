// queue FIFO 선입선출 한 줄이라고 생각하세요
// 라이브러리 queue 

#include <iostream>
#include <queue>

using namespace	std;

int main(void){

	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	q.pop(); // 제일 앞에 있는 1삭제.

	return 0;
}

// pair 이란 것을 배우게 되었다 pair 은 왜 쓸까?
// pair 을 단독으로 사용하기 위해서는 #include<utility> 를 적어주어야 한다.
// 큐때는 상관 X


