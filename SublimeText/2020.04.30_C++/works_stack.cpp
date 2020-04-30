// 프로그래머스 야근 지수 stack 으로 사용 

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    
    priority_queue<int,vector<int>,less<int> > q(works.begin(), works.end());
    
    // 이렇게 쓰는 거 잊지 말기!!!
    //priority_queue<int,vector<int>,greater<int> > q(works.begin(), works.end());
    // top 이 가장 큰 수 
    for (int i = 0; i < n; i++) {
        cout << q.top() << endl;
        if (q.top() > 0) {
            int tmp = q.top();
            q.pop();
            q.push(tmp-1);
        }
    }
    while(!q.empty()){
        answer += q.top() * q.top();
        q.pop();
      }
    return answer;
}
