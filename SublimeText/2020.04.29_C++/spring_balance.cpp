// 수정 후 정답 틀린 이유 분석
// 프로그래머스 레벨3 저울 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> weight) {
    int answer = 0;
    
    sort(weight.begin(), weight.end());
    answer += weight[0];
    
    
    for(int i= 1; i< weight.size(); i++){
            if(answer + 1 < weight[i]){
                break;    
            }
            else 
                answer += weight[i];
    }
    return answer + 1;
}

// 내 오답 

// if문이 안 걸칠 경우! 생각 했어야지 ㅠㅠㅠㅠㅠ

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> weight) {
    int answer = 0;
    
    sort(weight.begin(), weight.end());
    answer += weight[0];
    
    
    for(int i= 1; i< weight.size(); i++){
            if(answer + 1 < weight[i]){
                answer = answer + 1;
                break;    
            }
            else 
                answer += weight[i];
    }
    return answer;
}