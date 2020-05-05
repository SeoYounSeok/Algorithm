// 사이냅 소프트 면접 문제 
// 문제 1. 김씨와 이씨는 각각 몇 명 인가요?
// 문제 2. "이재영"이란 이름이 몇 번 반복되나요?
// 문제 3. 중복을 제거한 이름을 출력하세요.
// 문제 4. 중복을 제거한 이름을 오름차순으로 정렬하여 출력하세요.
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

vector<string> korea;


bool compare(string i, string j){
	if(i > j)
		return i > j ;
}


int main(void)
{	
	vector<string> korea2;
	int answer1_1 = 0;
	int answer1_2 = 0;
	int answer2 = 0;
	int answer3 = 0 ;
	int answer4 = 0;
	
	korea.push_back("Lee Yoo-deok");
	korea.push_back("Lee Jae-young");
	korea.push_back("Kwon Jong-pyo");
	korea.push_back("Lee Jae-young");
	korea.push_back("Kim Ji-wan");
	korea.push_back("Choi Seung-hyuk");
	korea.push_back("Park Young-seo");
	
	//문제 1.김씨와 이씨는 각각 몇 명 인가요?

	for(int i=0; i< korea.size(); i++){
		if(!korea[i].find("Kim")){
			answer1_1 ++;
		}
		if(!korea[i].find("Lee")){
			answer1_2 ++;
		}
	}

	// 문제 2."이재영"이란 이름이 몇 번 반복되나요?
	for(int i=0; i<korea.size(); i++){
		if(korea[i]== "Lee Jae-young")
			answer2++;
	}

	// 문제 3. 중복을 제거한 이름을 출력하세요.
	// 중복 값 제거는 sort 를 해줘야해서 이거는 내 스타일 아님. 

	sort(korea.begin(), korea.end());
	korea.erase(unique(korea.begin(),korea.end()), korea.end());


	// 문제 4. 중복을 제거한 이름을 오름차순으로 정렬하여 출력하세요. 
	// + 내림차순으로 변경해서 풀어볼게요.
	
	sort(korea2.begin(), korea2.end(),compare);

	return 0;
}