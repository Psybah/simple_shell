#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/* prototypes */
void execmd(char **argv);
char *get_location(char *command);
int stat(const char *pathname, struct stat *statbuf); /* for the stat function */
