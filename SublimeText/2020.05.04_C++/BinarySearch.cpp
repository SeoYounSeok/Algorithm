// 이진 탐색

bool BinarySearch(int *arr, int start, int end, int key){
  if(start > end) return false; // key 값이 없을 때 
  
  int mid = (start+end) /2;
  if(arr[mid] == key) {
    return true;
  }
  // key 값이 중간 값보다 더 작을 때.
  else if(arr[mid] > key) 
    return BinarySearch(arr,start,mid - 1, key);
  // key 값이 mid 값보다 클 때 
  else 
    return BinarySearch(arr, mid+1, end, key);
} 
