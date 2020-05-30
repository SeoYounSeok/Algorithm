## C++ Swap() 호출 방식 3가지

### 1. Call By Value : 값에 의한 호출 

```
#include <iostream>

class Swap
{
  int temp;
public :
  void swap(int a, int b) {
    temp  = a;
    a = b;
    b = temp;
    }
};
int main() {
  int a = 10;
  int b = 20;
  Swap swap;
  swap.swap(a,b);
  return 0;
}

```

### 2. Call by Address : 주소에 의한 호출

- 함수를 호출할 때 주소에 의한 방법은 변수의 주소를 인자로 넣어서 호출

```

swap.swap(&a , &b);
swap.swap(&arr[0] , &arr[1]);
swap.swap(p1 , p2);

```

### 3. Call By Reference : 참조에 의한 호출

- 참조에 의한 호출은 참조자를 사용하는 것

```
참조자 추가 설명

메모리 공간의 이름을 여러 개로 만드는 것은 가능 !
= 별명이라고 생각하세요 메모리 공간이 주어지지 않습니다.

int main(void) {

  int a = 5;
  int &b = a;
  cout << a << endl;
  cout << b << endl;
  
  b= 10;
  cout << a << endl;
  cout << b << endl;
  
  a = 3;
  
  cout << a << endl;
  cout << b << endl;
  
  // 5
  // 5
  // 10
  // 10
  // 3
  // 3
  
```

  
