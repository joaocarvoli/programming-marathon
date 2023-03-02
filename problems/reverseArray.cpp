#include <iostream>

using namespace std;

void reverseArray(int array[], int amount){
  for(int i = amount - 1; i >= 0; i--){
    printf("%d ", array[i]);
  }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  reverseArray(arr, n);
  return 0;
}