#include <stdio.h>

int main(){
  int arr[] = {1, 2, 3};
  int *ptr = &arr[0];

  for(int i=0; i<3; i++) {
    printf("[arr] %d / [ptr] %d \n", arr[i], *ptr);
    ptr++;
  }

  return 0;
}