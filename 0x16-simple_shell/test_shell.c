#include "protos.h"

int main(void)
{
	int status;
	pid_t child_pid;
	size_t line_size = 0;
	ssize_t getline_size;
	char **argv, **env, *path_to_file, *line = NULL;
	struct stat st;

	env = _initenv();

	while (1)
	{
		printf("ShiP$ ");
		getline_size = getline(&line, &line_size, stdin);
		line[getline_size - 1] = '\0';
		printf("line_size: %li\n", getline_size);

		rem_comments(line);
		argv = get_tokens(line, " ");

		if (!strcmp(argv[0], "exit"))
		{
			/* handle exit */
		}

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
		}
		if (child_pid == 0)
		{
			cmd_handler(argv, &env);
		}
		wait(&status);
	}
	free(line);
	free(argv);

	return (0);
}
