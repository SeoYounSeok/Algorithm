// 프로그래머스 모의고사 

#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> answer1 {1, 2, 3, 4, 5}; 
    vector<int> answer2 {2, 1, 2, 3, 2, 4, 2, 5}; 
    vector<int> answer3 {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}; 
    int num1 = 0; 
    int num2 = 0; 
    int num3 = 0;

    for(int i=0; i< answers.size(); i++){
        if(answers[i] == answer1[i%5])
            num1 ++;
        if(answers[i] == answer2[i%8])
            num2 ++;
        if(answers[i] == answer3[i%10])
            num3 ++;
    }
    cout << num1 << num2 << num3 <<endl;
    int maxnum = max(num1,max(num2,num3));
    // max는 두 값만 가능?
    if(maxnum == num1) 
        answer.push_back(1);
    // answer.push_back('1');
    // 아무 생각없이 문자로 작성하였음 이렇게 출력하면 49나옴...

        if(maxnum == num2) 
        answer.push_back(2);

        if(maxnum == num3) 
        answer.push_back(3);

    return answer;
}
