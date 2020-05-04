// 프로그래머스 레벨3 입국심사 
// 이분 탐색 

#include <string>
#include <vector>
using namespace std;

long long solution(int n, vector<int> times) {
    long long sum = 0;
    int s = times.size();
    long long min = 1;
    long long max = (long long)times[s-1] * n;
    long long mid = (min + max) / 2;
    long long answer = max;
    // 중간 값으로 해서 한 사람당 절반 이상을 처리하는지 합이! n이 되는지 확인! 
    // 틀렸음
    while (min <= max) {
        sum = 0;
        mid = (min + max) / 2;

        for (int i = 0; i < s; i++) 
            sum += mid / times[i];

        if (sum < n)
            min = mid + 1;
        else {
            if (mid <= answer)
                answer = mid;
            max = mid - 1;
        }
    }
    return answer;
}
