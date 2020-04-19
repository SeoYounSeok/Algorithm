#include <queue>
#include <iostream>


queue<pair<int,int>> q;
 
q.push(make_pair(1,2));
// make_pair 쓴다는 것 잊지말기 

int a = 2, b = 3;
pair<int,int> p = make_pair(a,b); // first second 를 잊지 말기
q.push(p);
 
cout << q.front().first << ' ' << q.front().second;        // 1 2
cout << q.back().first << ' ' << q.back().second;          // 2 3
 
//q가 비어있지 않은 동안
while(!q.empty())
{
    pair<int,int> n = q.front();
    q.pop();
 
    cout << n.first << ' ' << n.second << '\n';            // 1 2
                                                           // 2 3
}
 
cout << q.size();                                          // 0

q.push(make_pair(4,5));
q.push(make_pair(5,6));


queue<pair<int,int>> emt;
swap(q, emt);

cout << q.size();

// 밑에 홈페이지를 참고하였습니다. 
// 출처: https://sarah950716.tistory.com/5 [주니어 개발자의 대나무숲]
