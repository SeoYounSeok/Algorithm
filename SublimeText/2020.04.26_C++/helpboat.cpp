// 구명 보트 프로그래머스 레벨 2 
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int left_point = 0; int right_point = people.size() - 1;
    // sort(people.begin(), people.end());
    // 오름 차순  1 2 3 4 
    // 내림 차순  9 8 7 6 
    sort(people.begin(), people.end(), greater<int>());
    
    while(left_point <= right_point){
       if(people[left_point] + people[right_point] <= limit){
           right_point --;
           left_point ++;
           answer ++;
       } 
       else{
       left_point++;
       answer ++;
        }
    }
    return answer;
}