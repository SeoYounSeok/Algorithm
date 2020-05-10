// 프로그래머스 kakao 문제 멀쩡한 사각형

using namespace std;

long long solution(int w,int h) {
    long long answer = 1;
    // long long 처리 안해줘서 틀림... 66.7
    long long area = (long long)w * (long long)h;
    long long gcd;
    int start;
    
    if(w > h)
        start = h;
    else
        start = w;
    for(int i = start; i > 0; i--){
        if((w % i == 0) && (h % i == 0)){
            gcd = i;
            break;
        }
            
    }
    long long ar_w = w / gcd;
    long long ar_h = h / gcd;
    answer = area  - gcd * (ar_h + ar_w - 1);
    return answer;
}
