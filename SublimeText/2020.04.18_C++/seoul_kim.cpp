#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    int num = 0;
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i] == "Kim")
            num = i;
    }
    return answer + to_string(num) + "에 있다";
}

// vector 변수 값 기억  + to_string 바꿔줘야 하고 비교할 때 꼭 대문자....
