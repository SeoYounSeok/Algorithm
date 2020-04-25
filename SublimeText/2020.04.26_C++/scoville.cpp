// 프로그래머스 힙 더 맵게 레벨2 
// 배운 것 우선순위 큐!

#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    //내림차순 정렬
 	//sort(scoville.begin(),scoville.end(),greater<int>());
    //오름차순 정렬
    sort(scoville.begin(),scoville.end());
    // 우선순위 큐 오름차순
 	priority_queue<int, vector<int>, greater<int>> test;
    int first, second;
    for(int i = 0; i < scoville.size(); i++){
        test.push(scoville[i]);
    }
    if(test.top()>= K)
        return 0;
    
    while(test.top() < K){
        if(test.size() == 1)
            return -1;
        
        answer ++;
        int first = test.top();
        test.pop();
        int second= test.top();
        test.pop();
        int newsco = first+second*2;
        test.push(newsco);
        
    }
    
    return answer;
}