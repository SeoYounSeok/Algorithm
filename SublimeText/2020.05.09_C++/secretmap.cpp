#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    string temp;
    vector<string> answer;
    int count;
    for(int i=0; i<n; i++){
        while(true){
            if(arr1[i] == 0 && arr2[i] == 0){
                if( n <= count){
                        count = 0;
                        break;
                    }
                }
            if(arr1[i] % 2 != 0 || arr2[i] % 2 != 0 ){

                temp += "#";
                }
            else {
                temp += " ";
                }
            arr1[i] /= 2;
            arr2[i] /= 2;
            count ++;

        }
        reverse(temp.begin(), temp.end());
        answer.push_back(temp);
        temp = "";
     }
    return answer;
}
