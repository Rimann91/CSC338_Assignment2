#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int is_prime(int n);

void main(){
}

int is_prime(int n){
  if (n < 2) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  for (int i = 0; i < n; i += 2){
    if (n%i == 0) return 0;
  }
  return 1;
}
