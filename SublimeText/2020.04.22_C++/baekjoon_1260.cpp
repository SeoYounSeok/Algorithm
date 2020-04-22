#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
// dfs 재귀함수 bfs 큐
vector<int> arr[1001];
bool checkDFS[1001];
bool checkBFS[1001];

// DFS 는 재귀함수나 스택을 사용합니다. 
void dfs(int start){
	checkDFS[start] = 1;
	cout << "out : " << start << endl;
	for(int i=0; i<arr[start].size(); i++){
		int chekced = arr[start][i];

		if(checkDFS[chekced] == 0){
			dfs(chekced);
		}
	}
}
void bfs(int node){
	queue<int> q;
	q.push(node);
	checkBFS[node] = 1;
	while(!q.empty()){
		int v = q.front();
		cout << v << " ";
		q.pop();

		for(int i =0; i< arr[v].size(); i++){
			int next = arr[v][i];
			checkBFS[next] = true;
			q.push(next);
		}
	}

}

int main(void){

	int n, m, start;
	cin >> n >> m >> start;
	int a,b;

	for(int i=0; i<m; i++){
		cin >> a >> b;

		arr[a].push_back(b);
		arr[b].push_back(a);
			
	}
	for(int i=0; i<=n; i++){
		sort(arr[i].begin(), arr[i].end());
	}
	dfs(start);
	cout << "\n";
	
	bfs(start);
	cout << "\n";
	return 0;
}