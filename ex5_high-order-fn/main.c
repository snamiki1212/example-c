#include <stdio.h>

int increment(int (*)(int, int), int);
int add(int, int);

int main(){
	int result = increment(add, 10); // 11;
  printf("%d", result);
  return 0;
}

int increment(int (*f)(int, int), int x) { return f(x, 1); }
int add(x, y) { return x + y; }