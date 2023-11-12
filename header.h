#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


void show_prompt(void);
void shell_print(const char *code);
void shell_execute(const char *code);
void read_input(char *code, size_t size);
/* int execve (const char *__path, char *const __argv[]);*/

#endif
