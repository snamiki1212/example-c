#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define NUM_THREADS 10

void *thread_fn(void *arg) {
  int id = (int)arg;
  for(int i=0; i<5; i++){
    printf("Thread id=%d i=%d\n", id, i);
    sleep(1);
  }
  return "finished";
}

int main(int argc, char *argv[]){
  pthread_t v[NUM_THREADS];

  for(int i=0;i<NUM_THREADS; i++){
    int result = pthread_create(&v[i], NULL, thread_fn, (void *)i);
    bool isError = result != 0;
    if(isError){
      perror("pthread_create");
      return -1;
    }
  }

  for(int i=0; i<NUM_THREADS; i++) {
    char *ptr;
    int result = pthread_join(v[i], (void **)&ptr);
    bool isError = result != 0;
    if(isError) {
      perror("pthread_join");
      return -1;
    } else {
      printf("msg = %s\n", ptr);
    }
  }

  return 0;
}