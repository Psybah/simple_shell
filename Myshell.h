#ifndef MYSHELL_H
#define MYSHELL_H

/* STANDARD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>

/* prototypes */
void display_prompt(void);
void (tofs_print(const char *message));
void read_command(char *command, size_t size);
void execute_command(const char *command);
void display_prompt(void);

#endif /* MYSHELL_H */

