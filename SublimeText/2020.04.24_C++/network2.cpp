#include <string>
#include <vector>

using namespace std;

//bool 함수 
int visited[200];

vector<vector<int>> cop;

void dfs(int x)
{
    int i;
    visited[x] = 1;

    for(i=0;i<cop[x].size();i++)
    {
        if(cop[x][i] && !visited[i]) dfs(i);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    int i;
    
    cop = computers;
    for(i=0;i<computers.size();i++)
    {
        if(!visited[i])
        {
            dfs(i);
            answer++;
        }
    }
    return answer;
}