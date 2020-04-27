// 10 진수 2진수로 

#include <iostream>
 
using namespace std;
 
int main() {
 	int answer;
    int num = 20;
 
    for(int i=1; num > 0; i*=10){

    	int value = num % 2;
    	answer += value * i;
    	num = num / 2;
    }
    cout << answer << endl;
    return answer;

 }


