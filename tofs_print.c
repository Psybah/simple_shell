#include "Myshell.h"

void tofs_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}

