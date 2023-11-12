#include "header.h"

/**
 * shell_execute - this function will execute the shell
 * @code: this is the command
 */

void shell_execute(const char *code)
{
	pid_t inshell_pid = fork(); /*the inshell_pid is the child_pid */

	if (inshell_pid == -1)
	{
		shell_print("Error during the forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (inshell_pid == 0)
	{
		/*Child Process */

		/* Parse the command and its arguments */
		/* Tokenization of the code 
		char *argument[128];
		int argument_count = 0;

		char *token = strtok((char *)code, " ");

		while (token != NULL)
		{
			argument[argument_count++] = token;
			token = strtok(NULL, " ");
		}
		argument[argument_count] = NULL;

		 Execute the command 
		 execve(argument[0], argument); */
		execve(code, code, (const char *)NULL);
		perror("execve");

		/* If execve fails, print an error message */
		shell_print("Error while executing command. \n");
		exit(EXIT_FAILURE);
	}
	/* Parent process */
	wait(NULL);
}

