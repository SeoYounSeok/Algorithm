#include <iostream>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void dfs(int x){
	// 방문 했으면 아무것도 ..
	if(c[x]) return;
	// 방문하면 true
	c[x] = true;
	cout << x << ' ';

	for(int i=0; i< a[x].size(); i++){
		int y = a[x][i];
		dfs(y);
	}
}