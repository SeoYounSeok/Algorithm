// 프로그래머스 레벨2 전화번호 목록 

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(),phone_book.end());
    for(int i=0; i< phone_book.size(); i++){
        for(int j = i + 1; j<phone_book.size();j++){
            if(phone_book[j].find(phone_book[i]) == 0){
                cout << phone_book[i] << "//" << phone_book[j] <<endl;
                answer = false;
                return answer;
            }
            
        }
    }
    return answer;
}
