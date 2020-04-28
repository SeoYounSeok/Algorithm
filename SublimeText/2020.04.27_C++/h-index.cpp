// 프로그래머스 레벨2 H-Index 

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    // 내림 차순 
    sort(citations.begin(), citations.end(), greater<int>());
    if (citations[0]== 0)        
       return 0;
    for (int i = 0; i < citations.size(); i++){
        // 여기서 크기를 >= 를 해서 툴렸으... 생각잘하고 실수 노노 
        if (citations[i] > i){
            answer ++;
        }
        else break;
    }
    return answer;
}