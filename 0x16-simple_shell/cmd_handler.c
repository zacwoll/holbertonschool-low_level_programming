#include "protos.h"

void cmd_handler(char **argv, char ***env)
{
	char *built_ins[] = {"cd", "setenv", "unsetenv", "env", "exit"};
	int i;
	struct stat st;
	char *path_to_file;

	/* if it's a buitin */
	for (i = 0; built_ins[i]; i++)
	{
		/* fire built_in fnc */
	}

	path_to_file = whitcher(argv[0]);

	/* if it's a PATH cmd */
	if (stat(argv[0], &st) == 0)
		path_to_file = argv[0];
	else if (!strcmp(path_to_file, getenv(PATH)))
	{
		path_to_file = strcat(whitcher(argv[0]), "/");
		path_to_file = strcat(path_to_file, argv[0]);
	}
	else
	{
		printf("Sorry, that's not a thing\n");
	}


}
