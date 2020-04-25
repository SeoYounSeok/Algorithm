//프로그래머스 레벨2 힙 라면공장 틀림!
// 굳이 for문을 쓰지말것 
// top을 사용해서 저장해놓고 사용하면서 버릴것! 


#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    int day = 0 , num = 0;

    priority_queue<int, vector<int>, less<int>> pq;

    while( k > day){
    if(day >= dates[num]){
    	pq.push(supplies[num]);
    	num++;
    }

    if(stock == 0){
    	stock += pq.top();
    	pq.pop();
    	answer ++;
    }

        day ++;
    	stock --;

    } 

    return answer;
}