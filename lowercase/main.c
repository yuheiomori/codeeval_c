#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  FILE *f;
  char line[256];
  char *p;
  
  f = fopen(argv[1], "r");

  while (fgets(line, 1024, f)) {

    if (line[0] == '\n') {
      continue;
    }
    if(p = strchr(line, '\n')){
      *p = '\0';
    }

    for(p = line; *p; p++){
      *p = tolower(*p);
    }

    printf("%s\n", line);

  }
  return 0;
}
