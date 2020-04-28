## C++ String 라이브러리 알아보기

### 글자 추가 ( +, +=, append, insert)

- 연산자가 오버로딩 되어있습니다. BUT 빼기는 오버로딩 되어 있지 않아요. 

```

#include <string> 
#include <iostream> 

int main() { 
  std::string a("45"); 
  std::string b("11"); 
  std::cout << a + b << "\n"; 
  a += " volts"; 
  std::cout << a; 
  
  return 0; 
  }
  
```

+ INSERT 복습 (04.27)

```
{

    IntVector v;

    v.push_back( 1 );

    v.push_back( 2 );

    v.push_back( 3 );

    v.insert( v.begin(), 0 );

 

    for( int i = 0; i < v.size(); i++ )

    {

        static int nTrace = 0;

        TRACE( "%s(%d) : v = %d \n" , __FILE__, __LINE__, v[i] );

    }

}

 ```

### 문자열 추출하기 ( substr )

- 본래 문자열을 변경시키는 것은 아니고! 추출한 문자열을 리턴해줍니다.
- pos : 추출할 문자열의 시작 위치
- len : 그 위치로부터 문자 몇 개를 추출 할지 !

```

#include <string> 
#include <iostream> 
using namespace std;

int main() { 

  string str1 = "good morning Mr Brown";
  string str2;
  
  str = str1.substr(5,7); // "moring"
  str = str1.substr(5); // "moring Mr Brown"
  str = str1.substr(str1.find("Mr")); // "Mr Brown"
  
  return 0; 
  }
  
```

### 특정 문자열 제거하기 ( erase )

- 본래 문자열을 변경시키는 것은 아니고! 추출한 문자열을 리턴해줍니다.

```

#include <string> 
#include <iostream> 
using namespace std;

int main() { 

  string str1;
  
  str1.assign("12345678");
  str.erase(0, 4); // "5678"
  
  return 0; 
  }
  
```

- erase 는 하나만 지워집니다 쫙 지울려면 2번째 값도 입력해야함.

```

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec;
	
	for(int i=0; i<10; i++) vec.push_back(i*10); // 10~100 까지의 값 push 
	
	for(int i=0; i<vec.size(); i++) {
		if(i == 4) {
			vec.erase(vec.begin()+4); // 시작부터 4번째에 있는 값 삭제 4번 째 값만 삭제에요!!!
			cout << "vec[" << i <<"] : " << vec[i] << "\n"; // vec 안에 있는 값 출력 	
		} else {
			cout << "vec[" << i <<"] : " << vec[i] << "\n"; // vec 안에 있는 값 출력 	
		}
	}
    
	return 0;
} 

```
<출처>  
[소년코딩]  
https://boycoding.tistory.com/178   
[티스토리]  
https://jhnyang.tistory.com/115  
https://jhnyang.tistory.com/116  
https://soonsin.com/733  
https://jaynamm.tistory.com  
