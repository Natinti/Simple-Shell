#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

/**
 * prompt - this is a program that uses the etline to receive prompt
 * and wait to receive input
 * Return: 0 (Success)
 */

int main(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");
	fflush(stdout);

	while ((read = getline(&input, &len, stdin)) != -1)
	{
		if (read == 1 && input[0] == '\n')
		{
			printf("$ ");
			fflush(stdout);
		}
		else
		{
			printf("%s", input);
		}
	}
	free (input);
	return (0);
}
