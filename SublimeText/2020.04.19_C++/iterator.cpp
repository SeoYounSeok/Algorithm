#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);

    vector<int>::iterator it=v1.begin(); // 벡터 반복자 시작지점

    cout<<it[3]<<endl; // 임의 접근

    it+=2; // 연산
    cout << *it << endl;
    cout << endl;

    for(it=v1.begin(); it != v1.end(); ++it){
        cout << *it << endl;
    }

    for(int i=0; i<v1.size(); i++){

        cout<< *it<<endl;
    }
    return 0;
}
// 반복자는 *로 호출합니다. 
// 결과 값
// 40
// 30

// 10
// 20
// 30
// 40
// 50
// 60
// 33554434
// 33554434
// 33554434
// 33554434
// 33554434
// 33554434