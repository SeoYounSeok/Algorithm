// 프로그래머스 K번째 수 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> mid_answer;
    
    for(int num = 0; num< commands.size(); num++){
        int i = commands[num][0]- 1; // 시작점 설정 배열이니까 1빼주고
        int j = commands[num][1]; 
        int k = commands[num][2]-1;
        
        for(int num2 = i; num2 < j; num2++){
            mid_answer.push_back(array[num2]);
        }
        sort(mid_answer.begin(), mid_answer.end());
        answer.push_back(mid_answer[k]);
        mid_answer.clear();
    }
    
    return answer;
}