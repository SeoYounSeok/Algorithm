//프로그래머스 레벨2 올바른 괄호 

#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s){
    bool answer = true;
    stack<char> temp;

    for(int i=0; i<s.length(); i++){
        if(s.at(i) == '('){
            temp.push(s.at(i));
        }
        else {
            if(temp.empty())
                return false;
            else 
                temp.pop();
        }
    }

    if(temp.empty()){
        answer = true;    
    }
    else
        answer = false;

    return answer;
}