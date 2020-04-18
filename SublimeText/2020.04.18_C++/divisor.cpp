#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(int i, int j)
{
    return i > j;
}
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % divisor == 0){
            answer.push_back(arr[i]);
        }
    }
    // 오름차순 : 기본
    sort(answer.begin(),answer.end());
    // 내림차순
    //sort(answer.begin(),answer.end(), compare);
    if(answer.size() == 0)
        answer.push_back(-1);
    return answer;
}