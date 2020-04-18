// 프로그래머스 레벨1 p,y 찾기

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0, y = 0;
    for(int i=0; i<s.size(); i++){
        s[i] = toupper(s[i]);
        if(s[i] == 'P')
            p++;
        else if(s[i] == 'Y')
            y++;
    }
    if(p != y)
        answer = false;
    cout << s << endl;
    return answer;
}

// toupper 기억
