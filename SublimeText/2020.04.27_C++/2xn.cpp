// 프로그래머스 레벨3 2 n 타일링 문제 
// DP 점화식 사용해서 풀었습니다. 

#include <string>
#include <vector>

using namespace std;
int data[60000];

int result(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(data[n] != 0){
        return data[n];
    }
    else{
        data[n] = (result(n-2) + result(n-1)) % 1000000007;
        return data[n];
    }
}

int solution(int n) {
    int answer = 0;
    answer = result(n);
    return answer;
}