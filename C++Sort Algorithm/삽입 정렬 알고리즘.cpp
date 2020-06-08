#include <stilb.h>

int main(void) {
  int i , j , temp;
  int arr[10];
  for( i = 0; i < arr.size()- 1; i++) {
    j = i;
    while( arr[j] > arr[j+1]){
      swap(arr[j], arr[j+1]);
      j --;
      }
  }


}
