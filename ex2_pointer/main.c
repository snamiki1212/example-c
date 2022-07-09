#include <stdio.h>

int main(){
  int num = 2;
  int *ptr = &num;

  printf("[ptr] address is %d \n", ptr);
  printf("[ptr] value is %d \n", *ptr);

  *ptr = *ptr + 1;

  printf("[num] address is %d \n", &num);
  printf("[num] value is %d \n", num);

  return 0;
}
