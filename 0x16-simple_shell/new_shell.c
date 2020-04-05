#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int status;
	pid_t child_pid;
	char *line = NULL, *temp_line;
	char *token, *temp_token;
	size_t line_size = 0;
	ssize_t getline_size;
	char **argv;
	size_t ac;
	int i;

	printf("ShiP$ ");
	getline_size = getline(&line, &line_size, stdin);
	line[line_size - 1] = '\0';
	printf("line_size: %zu\n", line_size);

	temp_line = strdup(line);

	temp_token = strtok(temp_line, " ");
	ac = 0;
	while (temp_token)
	{
		temp_token = strtok(NULL, " ");
		ac++;
	}

	argv = malloc(sizeof(char *) * (ac + 1));

	token = strtok(line, " ");
	i = 0;
	while (token)
	{
		printf("%d: %s\n", i, token);
		argv[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	argv[i] = NULL;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
			perror("Error:");
		return (0);
	}

	wait(&status);
	return (0);
}
