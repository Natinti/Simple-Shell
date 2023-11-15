#include "header.h"

/**
 * shell_execute - this is the function that will execute the program
 * @code: this is the command that will be passed
 */

void shell_execute(const char *code)
{
	pid_t inshell_pid = fork();

	if (inshell_pid == -1)
	{
		shell_print("Error during during forking process.\n");
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (inshell_pid == 0)
	{
		execlp(code, code, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
