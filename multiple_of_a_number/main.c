#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  FILE *f;
  char line[256];
  int x,n,result;
  
  f = fopen(argv[1], "r");

  while (fgets(line, 1024, f)) {

    if (line[0] == '\n') {
      continue;
    }

    x = atoi(strtok(line, ","));
    n = atoi(strtok(NULL, ","));
    result = n;

    for(;;){
      result = result + n;

      if (result >=x) {
        break;
      }
    }
    printf("%d\n", result);

  }
  return 0;
}
