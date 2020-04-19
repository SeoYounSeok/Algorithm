// v.insert(v의 시작위치, 추가할 벡터의 시작위치, 추가할 벡터의 마지막 위치)
// v.erase(삭제할 시작 위치, 삭제할 마지막 위치)
// ㅡㅡㅡㅡㅡㅡㅡ 삽입과 삭제에 대해서 !!! ㅡㅡㅡㅡㅡㅡㅡㅡㅡ

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> v1, v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    // v2 에 v1을 삽입 
    v2.insert(v2.end(), v1.begin(), v1.end());

    for(int i=0; i<v2.size(); i++){
            cout << v2[i];
    }
    // 456123
    // 삽입 위치에 따라서 값을 다르게 집어 넣을 수 있습니다.
    // 삽입할 위치 , 어디서부터 , 어디까지
    v2.erase(v2.begin()+2, v2.begin()+4);

    for(int i=0; i<v2.size(); i++){
            cout << v2[i];
    }
    // 4523
    // 2부터 4 까지 인데 맨 뒤부분 이야!  
    return 0;
}