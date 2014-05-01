#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *bit_positions(int n, int p1, int p2);


int main(int argc, char *argv[])
{
  FILE *f;
  char line[256];
  int n = 0;
  int p1 = 0;
  int p2 = 0;
  
  f = fopen(argv[1], "r");

  while (fgets(line, 1024, f)) {

    if (line[0] == '\n') {
      continue;
    }

    n = atoi(strtok(line, ","));
    p1 = atoi(strtok(NULL, ","));
    p2 = atoi(strtok(NULL, ","));
    bit_positions(n, p1, p2);

  }
  return 0;
}


char *bit_positions(int n, int p1, int p2){
  int pos = 1;
  int b, p1_b, p2_b;
  while (n > 0){
    b = (n % 2);
    n = (n / 2);
    if (pos == p1) {
      p1_b = b;
    }
    if (pos == p2){
      p2_b = b;
    }
    pos++;
  }
  if (p1_b == p2_b ){
    printf("true\n");
  }else{
    printf("false\n");
  }

}
