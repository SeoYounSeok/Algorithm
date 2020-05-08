// 프로그래머스 레벨2 다리를 지나는 트럭 

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
    int cur_weight=0;
    int idx = 0;
    while(true){
        answer++;
        // 길이를 비교를 먼저해!
        // front 한 값 , pop 한 값 같은 값이야. 
        if(q.size()==bridge_length){
            cur_weight -= q.front();
            q.pop();
        }
        // 처음 루프로 들어와
        // 대기 트럭 값과 지금 들어간 값이 <= 견디는 무게 보다 작으면 실행
        if(cur_weight + truck_weights[idx] <= weight)
        {
            // idx 는 truck 의 몇번 째 즉 마지막 이면! 
            if(idx == truck_weights.size()-1)
            {
                
                answer += bridge_length;
                break;
            }
            
            q.push(truck_weights[idx]);
            cur_weight += truck_weights[idx];
            idx++;
        }
        // 이게 핵심 생각 잘하기 
        else{
            q.push(0);
        }
    }
    return answer;
}
