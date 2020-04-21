// 프로그래머스 DFS, BFS TEST 연습중
// 프로그래미스 level2 타겟 넘버 

#include <string>
#include <vector>

using namespace std;
int answer = 0;


void dps(vector<int> numbers, int target, int sum, int count){

	if(count == numbers.size()){
		if(sum == target)
			answer ++;
		return;
	}

	dps(numbers,target,sum + numbers[count], count+1);
	dps(numbers,target,sum - numbers[count], count+1);
}

int solution(vector<int> numbers, int target) {
    dps(numbers,target,0,0);
    return answer;
}

