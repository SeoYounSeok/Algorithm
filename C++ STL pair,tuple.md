### Pair : 한 쌍에 데이터를 처리할 수 있도록 해주는 자료구조 


```

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout

int main () {
  std::pair <std::string,double> product1;                     // default constructor
  std::pair <std::string,double> product2 ("tomatoes",2.30);   // value init
  std::pair <std::string,double> product3 (product2);          // copy constructor

  product1 = std::make_pair(std::string("lightbulbs"),0.99);   // using make_pair (move)

  product2.first = "shoes";                  // the type of first is string
  product2.second = 39.90;                   // the type of second is double

  std::cout << "The price of " << product1.first << " is $" << product1.second << '\n';
  std::cout << "The price of " << product2.first << " is $" << product2.second << '\n';
  std::cout << "The price of " << product3.first << " is $" << product3.second << '\n';
  return 0;
}

```
### Pair in Pair

```

v.push_back(pair<stiring , pair<int, int>> ("서윤석" , make_pair(90,1515151)));

// a.first or a.first.second 이렇게 사용

```

### Tuple : 서로 다른 자료형들을 여러개 저장할 수 있다. Pair 의 확장본? 

```

#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple <int, int, int , int> t1 = make_tuple(1,2,3,4);
    tuple <int, int, int , int> t2 = make_tuple(5,6,7,8);
    
    cout << get<0>(t1) << endl;  // 1
    cout << get<1>(t1) << endl;  // 2
    
    cout << get<2>(t2) << endl;  // 7
    
    get<3>(t2) = 3;              // 8 -> 3 변경됨
    cout << get<3>(t2) << endl;  // 3
}

```

<출처>  

https://ldgeao99.tistory.com/343  

