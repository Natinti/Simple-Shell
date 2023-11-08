#include <stdio.h>
#include <unistd.h>

/**
 * getppid - a process that prints the parent pid
 * ppid - Parent Process ID
 * Return: 0 Success
 */

int main(void)
{
	pid_t parent_pid;
	parent_pid = getppid();

	printf("The Parent Process ID:%u\n", parent_pid);
	return (0);
}


/**
 * why is echo $$ the same value,the command echo $$ in a shell also prints the PID of the current shell's parent process, which is usually the parent of your terminal session. This is why it typically displays the same value as the program, assuming you run the program in the same shell session. However, if you start a new shell session, the $$ value will be different.
 */
