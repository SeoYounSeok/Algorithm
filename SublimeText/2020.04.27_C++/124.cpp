// 프로그래머스 레벨 2 124 나라 

#include <string>
#include <vector>
using namespace std;

string solution(int n) {
	string answer = "";
	while (n != 0) {
        
		if (n % 3 == 0) {
			// insert 함수 연습
			// answer.insert(0,"4");
			// 작은 따옴표 사용시에러!
			answer = "4" + answer;

			n = n / 3 - 1;
		}
		else {
			answer = to_string(n % 3) + answer;
			n /= 3;
		}
	}
	return answer;
}