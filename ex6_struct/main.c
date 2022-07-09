#include <stdio.h>

struct user {
  int id;
  char name[10];
}

int main(){
  struct user u1;
  u1.id = 1;
  u1.name = "John";
}