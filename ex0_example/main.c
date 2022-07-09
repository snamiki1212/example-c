#include <stdio.h>

int main(void){

	// printf("プログラミング入門\n");
  // char hi;
  // // hi = 'O';
  // printf("this is %s", &hi);

  // //
  // // scanf
  // //
  // int a;
  // scanf("%d", &a);

  // if (a % 2 == 0 ){
  //   printf("even");
  // } else {
  //   printf("odd");
  // }

  char str[] = "hello world";
  int len = sizeof str;
  printf("%d \n", len);
  for(int i=0; i<len; i++) {
    printf("%c", str[i]);
  }

	return 0;
}