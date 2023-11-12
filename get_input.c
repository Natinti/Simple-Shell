#include "header.h"

/**
 * read_input - this function gets the inputs in the program
 * @code: the command
 * @size: the size of the string
 */

void read_input(char *code, size_t size)
{
	if (fgets(code, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Error while reading the input. \n");
			exit(EXIT_FAILURE);
		}
	}
	code[strcspn(code, "\n")] = '\0'; /* Remove newlines in the string */
}

