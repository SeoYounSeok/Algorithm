// 큰 수 만들기 이 문제가 개인적으로 알고리즘 풀이가 안되어서 가장 오래걸렸고 틀림...
// 프로그래머스 레벨 2 큰 수 만들기. 

#include <iostream>
#include <string>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    // string 함수로 배열을 뽑아 낼 수 있습니다. 
    // i 하나를 이용해서 비교하고 erase로 지워 줍니다. 
    // 마지막까지 비교이니까 제일 길이의 -1 을 해줌! 
    
    for (int i = 0; k > 0 && i < number.length() - 1; i++) {
        if (number[i] < number[i + 1]) {
            k--;
            number.erase(number.begin() + i);
            // 한 숫자 없어졌으니까 i 값을 앞으로 한 칸 땡겨준다. 
            i = -1;
        }
    }
    
    if (k > 0)
        for (int i = 0; i < number.length() - k; i++)
            answer += number[i];
    else
        answer = number;
    
    return answer;
}
