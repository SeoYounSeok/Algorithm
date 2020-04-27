// 2 진수 10진수로 
// 진수로 바꾸는 것으로  나눌 생각!!

#include <iostream>
 
using namespace std;
 
int main() {
 	int answer;
    int num = 10100;
 
    for(int i=1; num > 0; i*=2){

    	int value = num % 10;
    	answer += value * i;
    	num = num / 10;
    }
    cout << answer << endl;
    return answer;

 }


