// 프로그래머스 주식가격 level2 
#include <string>
#include <vector>
#include <queue>
using namespace std;

// 주식가격 배열 
vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0; i< prices.size(); i++){
        int result = 0;
        for(int j = i+1; j< prices.size(); j++){
            if( prices[i] <= prices[j]){
                result ++;
            }
            else {
                result++;
                break;
            }
        }
         answer.push_back(result);
    }
    
    return answer;
}
