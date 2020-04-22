#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

// 그래프의 원소가 7개
int number = 7; 
// 방문처리 checked의 약수 
// bool 함수로 작성해도 됩니다. 
int c[7];
// 1~7 까지 인덱스를 처리할 수 있도록 8개의 공간
vector<int> a[8];

void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start] = true;
	// 큐에 값이 있을 경우 반복해서 실행
	// 큐에 값이 있다 -> 아직 방문하지 않은 노드가 존재한다. 	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << endl;
		for(int i=0; i< a[x].size(); i++){
			int y = a[x][i];
			cout << "y : "<< y << endl;
			// 방문을 하지 않은 상태이라면,
			if(!c[y]){
				q.push(y);
				c[y]= true;
			}
		}
	}
}

int main(void) {
	a[1].push_back(2);
	a[2].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);
	a[2].push_back(4);
	a[4].push_back(2);

	bfs(1);
	return 0;

}
// 결과 값
// 1
// y : 2
// 2
// y : 1
// y : 3
// y : 4
// 3
// y : 2
// 4
// y : 2