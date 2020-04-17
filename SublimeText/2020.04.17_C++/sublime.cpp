
#include <iostream>

using namespace std;

int sum(int math,int korea) {
	return math+korea;
}

int main(int argc, const char * argv[])
{
	int mathScore;
	int korScore;
	int totalScore;

	cout << "국어 성적은 : "; 
	cin >> korScore;

	cout << "수학 성적은 : ";
	cin >> mathScore;


	totalScore = sum(mathScore,korScore);
	return totalScore;
}



