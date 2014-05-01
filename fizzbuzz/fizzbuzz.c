#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  FILE *f;
  char line[256];
  int fizz, buzz, length;
  
  f = fopen(argv[1], "r");

  while (fgets(line, 1024, f)) {

    // Skip empty lines
    if (line[0] == '\n') {
      continue;
    }

    fizz = atoi(strtok(line, " "));
    buzz = atoi(strtok(NULL, " "));
    length = atoi(strtok(NULL, " "));

    int i;
    for (i = 1; i <= length; i++) {
      if (i % fizz == 0){
        printf("F");
      }
      if (i % buzz == 0){
        printf("B");
      }
      if (i % fizz != 0 && i % buzz != 0){
        printf("%d", i);
      }
      if (i == length) {
        printf("\n");
      }else {
        printf(" ");
      }
    }
  }
  return 0;
}
