// - 코딩테스트 PS 하고 알고리즘 사용하기
// 기본 단계
// 최대값과 최소값 구하는 알고리즘 제시

// 1단계 : 배열에 자료를 입력하고 최댓값과 최솟값에 변수를 설정합니다.
// 2단계 : 배열에서 하나의 값을 꺼내와 비교해서 큰 값은 최댓값 변수에 작은 값은 최솟 값 변수에 넣습니다.
// 3단계 : 배열의 크기만큼 2단계 처리를 반복한다.

// std::min(a,b) - a로 들어오면 b로 들어온 값을 비교해서 작은 값을 반환하는 함수입니다.
// 헤더 파일 <algorithm> 에 대해서는 텍스트 파일에 작성하도록 하겠습니다. 
// 예제 1번은 2 값만 비교하기 


#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
	int m, n;
	cin >> m >> n;
	cout << "max 값 : " << max(m, n) << endl;
	cout << "min 값 : " << min(m, n) << endl;
	return 0;

}




