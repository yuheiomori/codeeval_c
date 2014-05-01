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


int is_palindrome(int n)
{
  char s[100];
  sprintf(s, "%d", n);
  int i, last;
  last = strlen(s);

  for(i = 0; i < last; i++)
    {
      if(s[i] != s[last - i - 1])
        {
          return 0;
        }
    }
  return 1;
}


int main(int argc, char *argv[])
{
  int i;
  for (i = 999; i >= 2; i--) {
    if(is_prime(i) && is_palindrome(i)){
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
