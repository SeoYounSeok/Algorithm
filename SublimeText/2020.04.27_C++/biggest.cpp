#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool change(string a, string b){
    if(a +  b > b + a)
        return true;
    else
        return false;
}


string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;
    for(int i=0; i<numbers.size(); i++){
        strings.push_back(to_string(numbers[i]));
    }
    sort(strings.begin(), strings.end(),change);
    if(strings.at(0) == "0") return "0";

// 원래 사용하던 방식;
     for (int it = 0; it < strings.size(); it++){
        answer += strings[it];
    }
   
// 밑에 것 중에 하나 사용 연습중 .

//     for (auto it = strings.begin(); it != strings.end(); ++it){
//         answer +=  *it;
//     }
    
    
//     for(auto num:strings){
//         answer += num;
//     }
    
    
    return answer;
}