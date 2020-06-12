// 아직 이해 잘 못함... 어려움.. 

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int max_cnt = 0;

void DFS(string start, vector<vector<string>>& tickets, vector<bool>& visit, vector<string>& answer, vector<string>& temp, int cnt) {
    temp.push_back(start);
    
    if (max_cnt < cnt) {
        max_cnt = cnt;
        answer = temp;
        for(int i =0; i< answer.size(); i++){
        cout << answer[i] <<"gggggg"<< endl;
        }
        cout << "temp 변경중" << endl;
    }
    
    for (int i = 0; i < tickets.size(); i++) {
        if (start == tickets[i][0] && !visit[i]) {
            visit[i] = true;
            cout << "true다음" << i << endl;
            DFS(tickets[i][1], tickets, visit, answer, temp, cnt + 1);
            cout << "false " << i << endl;
            visit[i] = false;
        }
    }
    cout << "나왔으유ㅜ" << endl;
    temp.pop_back();
}

vector<string> solution(vector<vector<string>> tickets) { 
    vector<string> answer, temp; 
    int cnt = 0;
    vector<bool> visit(tickets.size(), false); 
    // sort(tickets.begin(), tickets.end()); 
    DFS("ICN", tickets, visit, answer, temp, cnt);
    
    return answer; 

}
