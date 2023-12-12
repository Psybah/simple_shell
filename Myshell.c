#include "Myshell.h"

int main(void)
{
	char command[256];

	while (true)
	{
		display_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}

	return (0);
}

