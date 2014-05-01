#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_prime(int n){
  int i;
  for (i = 2; i < n/2+1; i++) {
    if (n%i == 0){
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[])
{
  int i = 2;
  int sum = 0;
  int cnt = 0;
  while(cnt < 1000){
    if(is_prime(i)){
      sum += i;
      printf("add %d: cnt %d: now %d\n", i, cnt, sum);
      cnt ++;
    }
    i++;
  }

  printf("%d\n", sum);
  return 0;
}
