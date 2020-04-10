#include "protos.h"

int main(void)
{
	int status;
	pid_t child_pid;
	size_t line_size = 0;
	ssize_t getline_size;
	char **argv, **env, *path_to_file, *line = NULL;
	struct stat st;
	char *built_ins[] = {"cd", "setenv", "unsetenv", "exit"};
	env = _initenv();

	printf("ShiP$ ");
	getline_size = getline(&line, &line_size, stdin);
	line[getline_size - 1] = '\0';
	printf("line_size: %li\n", getline_size);

	rem_comments(line);
	argv = get_tokens(line, " ");

	cmd_handler(argv, &env);
	
	/*
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
	}
	if (child_pid == 0)
	{
		if (execve(path_to_file, argv, env) == -1)
			perror("Error:");
		return (0);
	}

	wait(&status);
	*/
	free(line);
	free(argv);

	return (0);
}
