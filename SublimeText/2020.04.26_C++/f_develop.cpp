// 프로그래머스 level 2 기능 개발

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> result;
    int max = 100 ; 
    for(int i= 0; i<progresses.size(); i++){
        int day = 0; 
        day = (max - progresses[i]) / speeds[i] ; 
        if((max - progresses[i]) % speeds[i] != 0)
            day ++;
        answer.push_back(day);
    }
    int day = answer[0];
    int num =0;
    for(int i=0; i<answer.size(); i++){
        if(day < answer[i]){
            
            result.push_back(num);
            num = 1;
            // 이 한 문장이 제일 중요함.
            day = answer[i];
        }
        else {
            num++;
        }
        
        // 맨 마지막은 비교를 할 수가 없어서 1을 집어 넣어줌.. 
        if(i == answer.size() -1)
            result.push_back(num);
    }

    
    return result;
}
