#include "header.h"

/**
 * main - this is the main Entry point of the shell program
 * Return: 0(Sucess)
 */

int main(void)
{
	char input[128];

	while (true)
	{
		show_prompt();
		read_input(input, sizeof(input));
		shell_execute(input);
	}
	return (0);
}
