// 프로그래머스 레벨 2 Top

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    for(int k=0; k<heights.size(); k++){
        answer.push_back(0);
    }
    for(int i=heights.size()-1; i>=0; i--){
        for(int j= i-1; j>=0; j--){
            if(heights[i]<heights[j]){
              answer[i] = j+1; 
              break;
            }
        }
    }
    return answer;
}