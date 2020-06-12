#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    sort(tickets.begin(), tickets.end(), greater<vector<string>>());
    // 키 : 갈 수 있는 것들 
    // 밸류 : 갈 수 있는 것의 조합 배열들 . 핀 아웃 
    unordered_map<string, vector<string> > routes;
    
    for ( int i =0; i< tickets.size(); i++)
        routes[tickets[i][0]].push_back[tickets[i][1]];
    
    vector<string> s = vector<string> {"ICN"};
        
    while(!s.empty()){
        string airport = s.back();
        cout << airport << endl;
        if(routes.find(airport) == routes.end() ||
          routes[airport].size() == 0
          ){
            answer.push_back(airport);
            s.pop_back();
        } else {
            s.push_back(routes[airport].back());
            routes[airport].pop_back();
        }
    }
        
        
        
    reverse(answer.begin(), answer.end());
    return answer;
}