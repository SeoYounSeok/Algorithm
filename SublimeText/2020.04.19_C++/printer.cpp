// 프로그래머스 레벨 2 프린터 stack queue 사용 안한 풀이 !

#include <algorithm>
#include <string>
#include <vector>

// int max(vertor<int> a){
//     int max_num = 0;
   
//     for(int i=0; i< a.size(); i++) {
//         if(max_num < a[i])
//             max_num  = a[i];
//     }
//     return max_num;
// }
// 호출시

// max(priorities)

// int max = *max_element(~~.begin(), ~~.end());


using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int trends = false;
    int max = *max_element(priorities.begin(), priorities.end());
    while (!trends)
    {
        for (int i = 0; i < priorities.size(); ++i)
        {
            if (priorities[i] == max)
            {
                ++answer;
                // 이렇게 1을 만드는 구만...
                if (i == location)
                    return answer;

                priorities[i] = 0;
                max = *max_element(priorities.begin(), priorities.end());
            }
        }
    }
}
