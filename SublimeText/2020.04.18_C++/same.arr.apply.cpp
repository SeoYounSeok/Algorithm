// 프로그래머스 레벨 1 같은 숫자는 싫어 

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for(int i=1; i< arr.size(); i++){
        if(arr[i-1] != arr[i])
            answer.push_back(arr[i]);
        }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()),answer.end());
    return answer;
}
// unique는 algorithm 함수 안에 있습니다.
// sort unique erase 사용 중입니다. 
// sort 를 사용하지 않고 지우는 방법 이중 포문 말고 확인중 
