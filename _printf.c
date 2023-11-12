#include "header.h"

/**
 * shell_print - this function will print in the code lke printf
 * @code: this will receive the string
 */

void shell_print(const char *code)
{
	/*const char *code = "$";*/

	write(STDOUT_FILENO, code, strlen(code));
	fflush(stdout);
}
