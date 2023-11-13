#include "header.h"

/**
 * shell_execute - this function will execute the shell
 * @code: this is the command
 */

void shell_execute(const char *code)
{
	char code_path[256];
	char *args = {code, NULL};

	pid_t inshell_pid = fork(); /*the inshell_pid is the child_pid */

	if (inshell_pid == -1)
	{
		perror("fork");
		shell_print("Error during the forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (inshell_pid == 0)
	{
		/*Child Process */

		/* Creating a full path of the program */
		snprintf(code_path, sizeof(code_path), "/bin/%s", code);

		execve(code_path, args, NULL);

		perror("execve");
	/*	exit(EXIT_FAILURE);*/

		/* Parse the command and its arguments */
		/* Tokenization of the code 
		char *args[128];
		int arg_count = 0;

		char *token = strtok((char *)code, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

		 Execute the command 
		 execve(args[0], args);
		execve(code, code, (char *)NULL);
		perror("execve");*/

		/* If execve fails, print an error message */
		shell_print("Error while executing command. \n");
		exit(EXIT_FAILURE);
	}
	else
	{
	/* Parent process */
	wait(NULL);
	}
}


/*execve function

int main()
{
	char *args[] = { "/bin/ls", "-1", NULL };
	char *env[] = { NULL };  when No environment var is needed

	execve("/bin/ls", args, env);

	 If execve() returns, an error occurred 
	perror("execve");
	return (1);
}
*/
