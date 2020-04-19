// 값을 찾을 때 사용합니다. 
// binary_search(v.begin(),v.end(), 찾고자 하는 값)
// 정렬되어 있는 배열, 컨테이너 등을 탐색하여 원하는 값이 있는지 여부를 확인하고 1과 0을 반환해줍니다. 
// lower_bound 의 경우에는 value 보다 작지 않은 첫번 째 요소를 가리키는 iterator을 반환합니다.
// upper_bound 의 경우에는 value 보다 큰 값의 첫번 째 요소를 가리킵니다. 


#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);

    cout << binary_search(v1.begin(), v1.end(), 6) << endl;
    cout << binary_search(v1.begin(), v1.end(), 7) << endl;

    // 반복자에 대해서 공부를 조금 더 해봐야한다.
    // 반복자는 포인터를 일반화한 것으로, 포인터는 반복자가 가져야할 모든 요구 사항을 만족합니다.
    
    vector<int>::iterator it;
    it = lower_bound(v1.begin(), v1.end(),3);
    cout << "lower_bound 3 : " << *it << endl;

    it = upper_bound(v1.begin(), v1.end(),3);
    cout << "upper_bound 3 : " << *it << endl;
    

    return 0;
}