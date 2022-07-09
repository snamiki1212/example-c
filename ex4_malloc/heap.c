#include <stdio.h>
#include <stdlib.h>


void* increment(int x){
  int *tmp = (int *)malloc(sizeof(int));
  *tmp = x + 1;
  return tmp;
}

int main(){
  int num = 10;
  int *result = increment(10);
  printf("%d\n", *result);
  free(result);

  return 0;
}

