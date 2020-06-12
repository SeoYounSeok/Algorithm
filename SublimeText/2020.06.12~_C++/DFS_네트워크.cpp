#include <string>
#include <vector>

using namespace std;

void dfs(int n, vector<vector<int>>& computers, vector<bool>& visit, int start){
    visit[start] = true;
    
    for(int i=0; i<n; i++){
        if(!visit[i] && computers[start][i])
            dfs(n,computers,visit,i);
    }
    
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visit(n, false);
    
    for(int i=0; i<n; i++){
        if(!visit[i]){
            answer ++;
            dfs(n, computers,visit, i);
            }    
    }
    return answer;
}
