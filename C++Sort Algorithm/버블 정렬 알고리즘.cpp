#include <stdio.h> 

int main(void){ 
  int array[10] = {4, 5, 2, 7, 9, 1, 8, 3, 6, 10}; 
  int i, j, temp; 
  
  for(i=0; i<10; i++){ 
    for(j=0; j<9-i; j++){ 
    
      if(array[j] > array[j+1]){ 
          temp = array[j]; array[j] = array[j+1]; array[j+1] = temp; 
          } 
      } 
  } 
  // 결과 확인 
  for(i=0; i<10; i++){
    printf("%d ", array[i]); 
    } 
    
    return 0; 
 }
 
// 1 2 3 4 5 6 7 8 9 10
