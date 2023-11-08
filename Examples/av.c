#include <stdio.h>

/**
 * av - this is a program that prints the argv without giving ac
 * @ac: argument count, the number of items in av
 * @av: argument variable, is a NULL terminating array of strings
 * Return: 0 (Success)
 */

int main(int ac, char **av)
{
	int i = 1; //Start at 1 because index 0 is program name
	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
