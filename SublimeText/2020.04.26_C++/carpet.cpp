#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int red) {
    vector<int> answer;
    int sum = brown + red;
    for(int i=3; i<sum; i++){
        if((brown + red) % i != 0)
            continue;
        int result = (brown + red) / i;
        if(( i - 2 )* ( result - 2) == red) {
            answer.push_back(i);
            answer.push_back(result);
            break;
        }
    }
    sort(answer.begin(),answer.end(),greater<int>());
    return answer;
}