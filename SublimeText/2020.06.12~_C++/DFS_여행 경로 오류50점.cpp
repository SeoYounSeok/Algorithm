#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void dfs(string from, vector<vector<string>>& tickets, vector<bool>& visit, vector<string>& answer) {
    
    answer.push_back(from); 
    
    for (int i=0 ; i<tickets.size() ; i++) 
    { 
        if (tickets[i][0] == from && visit[i] == false) 
        { 
            visit[i] = true; 
            dfs(tickets[i][1], tickets, visit, answer); 
            return; 
        } 
    } 
}

vector<string> solution(vector<vector<string>> tickets) { 
    vector<string> answer; 
    vector<bool> visit(tickets.size(), false); 
    sort(tickets.begin(), tickets.end()); 
    dfs("ICN", tickets, visit, answer); 
    
    return answer; 

}
