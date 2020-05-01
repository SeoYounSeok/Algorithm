// 프로그래머스 레벨 3 거스름돈 
// 틀림.. 알고리즘을 짜는 것에 시간이 걸렸으. DP 사용

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> money) {
    int answer = 0;
    long long dp[100001];

    dp[0] = 1;
    // 
    for (int i = 0; i < money.size(); i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= money[i]) {
                dp[j] += dp[j - money[i]];
               	cout << "j : " << j << "// dp[j - money[i]] : " << dp[j - money[i]] << "// dp [j] : " << dp[j] << endl;
            }
        }
    }
    answer = dp[n];
    return answer;
}

// j : 1// dp[j - money[i]] : 1// dp [j] : 1
// j : 2// dp[j - money[i]] : 1// dp [j] : 1
// j : 3// dp[j - money[i]] : 1// dp [j] : 1
// j : 4// dp[j - money[i]] : 1// dp [j] : 1
// j : 5// dp[j - money[i]] : 1// dp [j] : 1
// j : 2// dp[j - money[i]] : 1// dp [j] : 2
// j : 3// dp[j - money[i]] : 1// dp [j] : 2
// j : 4// dp[j - money[i]] : 2// dp [j] : 3
// j : 5// dp[j - money[i]] : 2// dp [j] : 3
// j : 5// dp[j - money[i]] : 1// dp [j] : 4