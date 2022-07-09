#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr = (int*)malloc(sizeof(int) * 3);

  *ptr = 1234;
  printf("%d", *ptr);
  ptr++;

  return 0;
}