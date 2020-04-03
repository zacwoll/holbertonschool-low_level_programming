#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	int line_count = 0;
	ssize_t line_size;
	pid_t child_pid;
	int status;
	char **args;
	int argcount = 0;
	char *token;
	
		/* shell prompt and argument acception*/
		printf("ShiP$ ");
		line_size = getline(&line_buf, &line_buf_size, stdin);
		
		do
		{
			token = strtok(NULL, line_buf);
			memcpy(args[argcount], token, strlen(token) + 1);
			argcount++;
		} while (token != NULL);

		(void)ac;

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			if (execvp(args[0], args) == -1)
				perror("Error:");
			return (0);
		}
		else
		{
			wait(&status);
		}
}
