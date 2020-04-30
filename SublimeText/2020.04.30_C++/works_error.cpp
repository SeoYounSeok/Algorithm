// 프로그래머스 level 3 야근 지수 정확성 100 효율성 0 시간초과 

// for 문을 무지막지하게 써버리니까 효율성 에러 + sort 문 for문 안에 사용 error;

// 다른 분들 풀이를 보고 풀겠습니다. 

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    int sum = 0;
    
    
    
    for(int i=0; i<works.size(); i++){
        sum += works[i];
    }
    if(sum <= n)
        return 0;
    

    for(int i=0; i<n; i++){
        sort(works.begin(),works.end(), greater<int>());
        int num = works[0] - 1;
        works.erase(works.begin());
        works.push_back(num);
    }
    
    for(int i=0; i<works.size(); i++){
        answer += works[i] * works[i];
    }
    return answer;
}
