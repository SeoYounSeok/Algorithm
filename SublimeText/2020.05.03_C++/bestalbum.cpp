// 프로그래머스 레벨 3 베스트 앨범
// 실패 못품!
// 남의 코드 분석중!
// 이렇게 코드짜면 1시간 넘게 걸림..

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    vector<pair <string, int>> vec;
    vector<pair <int, string>> temp;
    vector<pair <int, int>> max_value;
    
    for (int i = 0; i < genres.size(); i++) 
        vec.push_back(make_pair(genres[i], plays[i]));
    
    for (int i = 0; i < genres.size(); i++) {
        temp.push_back(make_pair(plays[i], genres[i]));
        for (int j = i + 1; j < genres.size(); j++) {
            if (genres[i] == genres[j]) {
                temp[i].first += plays[j]; 
                genres.erase(genres.begin() + j); plays.erase(plays.begin() + j);
                j--;
            }
        }
    }
    sort(temp.begin(), temp.end(), greater<pair<int, string>>());
    
    for (int i = 0; i < temp.size(); i++) {
        for (int j = 0; j < vec.size(); j++) {
            if (temp[i].second == vec[j].first) max_value.push_back(make_pair(vec[j].second, j));
        }
        sort(max_value.begin(), max_value.end(), greater<pair<int, int>>());
        if (max_value.size() >= 2) {
            if (max_value[0].first == max_value[1].first) {
                answer.push_back(max_value[1].second); answer.push_back(max_value[0].second);
            }
            else {
            answer.push_back(max_value[0].second); answer.push_back(max_value[1].second);
            }
        }
        else answer.push_back(max_value[0].second);
        max_value.clear();
    }
    return answer;
}