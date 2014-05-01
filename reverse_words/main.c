#include <stdio.h>
#include <string.h>


void print_words(char *line, int start, int end){
    int k;
    for(k = start; k < end; k++) {
      printf("%c", line[k]);
    }
    printf(" ");
}


void reverse_words(char *line){
  int last_pos;
  int spaces[100];

  int i = 0;
  int j = 0;
  while(line[i]) {
    if(line[i] == ' ') {
      spaces[j] = i;
      j++;
    }
    i++;
  }
  last_pos = strlen(line);
  j = j - 1;

  while(j >= 0) {
    print_words(line, spaces[j] + 1, last_pos);
    last_pos = spaces[j];
    j--;
  }
  print_words(line, 0, last_pos);
  printf("\n");
}


int main (int argc, char **argv)
{
  FILE *f;
  char line[1024];
  char *p;

  f = fopen(argv[1], "r");

  while (fgets(line, sizeof line, f)){
    if(p = strchr(line, '\n')){
      *p = '\0';
    }
    if (line[0] == '\0'){
      continue;
    }

    reverse_words(line);    
  }
  return 0;
}
