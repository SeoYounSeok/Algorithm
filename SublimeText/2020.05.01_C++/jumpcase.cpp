// 프로그래머스 레벨3 멀리 뛰기
// 피보나치 수열인 것을 확인할 수 있습니다.
// 1칸, 2칸 문제는 점화식을 찾는 것을 목표로 합니다. 

#include <string>
#include <vector>

using namespace std;
long long dp[2001];
long long jumpcase(int n) {
    
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
      dp[i] = (dp[i-1]+dp[i-2]) % 1234567;
  }

    return dp[n];
}

long long solution(int n) {
    long long answer = 0;
    return jumpcase(n);
}
