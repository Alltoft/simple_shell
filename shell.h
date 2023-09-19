#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

extern char **environ;

char *prompt_shell(void);
char **command_tokenizer(char *line);
int _execute(char **command, char **argv, int idx);
void free_arr(char **arr);
char *_getenv(char *variable);
char *_getpath(char *command);

char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_itoa(int n);
void print_error(char *name, char *command, int idx);
void reverse_string(char *str, int len);

#endif
