#include "shell.h"

int main(int ac, char **argv){
  char *prompt = "(Myshell) $ ";
  char *lineptr;
  size_t n = 0; 

  /* declaring the void variables */
  (void)ac; (void)argv;

  printf("%s", prompt);
  getline(&lineptr, &n, stdin);
  printf("%s\n", lineptr);

  free(lineptr);
  return (0);
}

