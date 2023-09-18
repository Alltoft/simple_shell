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

extern char **env;

char *prompt_shell(void);
char **command_tokenizer(char *line);
int _execute_command(char **command);
char *_strdup(const char *str);

#endif
