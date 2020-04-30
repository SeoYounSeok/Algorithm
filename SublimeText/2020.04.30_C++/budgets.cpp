#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> budgets, int M) {
    long long answer = 0;
    long long num = 0;
    long long sum = 0;
    // 기준 점  이만큼만 부여가능 
    long long value = M / budgets.size();
    sort(budgets.begin(), budgets.end());
    cout << value << endl;
    
    for(int i = 0; i< budgets.size(); i++){
        sum += budgets[i];
    }
    if(sum < M)
        answer = budgets[budgets.size() - 1];
    
    long long avg = sum / budgets.size();
    int size = budgets.size();

    // 크면 숫자 증가 작으면 빼고 
    for(int i=0; i< budgets.size(); i++){
        if(budgets[i] > value) 
            return value;
        answer += budgets[i];
        size --;
        value = (M - answer) / size;
        
    }
}
