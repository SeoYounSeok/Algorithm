// 지구를 나타내는 수를 E, 태양을 나타내는 수를 S, 
// 달을 나타내는 수를 M이라고 했을 때, 이 세 수는 서로 다른 범위를 가진다. 
// (1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)

#include <iostream>
#include <stack>

using namespace std;

vector<int> dateESM;
int E,S,N;

void solution(){
	int Year = 1;
    
    while (1)
    {
        if ((Year - E) % 15 == 0 && (Year - S) % 28 == 0 && (Year - M) % 19 == 0) 
        	break;
        Year++;
    }
    
    cout << Year << endl;
}



int main(void){

	cin << E << S << N; 
	solution();
	return 0;
}