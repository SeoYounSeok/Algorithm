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
<출처>
https://boycoding.tistory.com/178 [소년코딩]
https://jhnyang.tistory.com/115
https://jhnyang.tistory.com/116
