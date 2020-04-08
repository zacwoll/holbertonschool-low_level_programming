#include "protos.h"
/* This function tests get_tokens.c file */
int main(void)
{
	char *str = strdup("foo:bar");
	char **tokens = get_tokens(str, ":");
	int i;

	for (i = 0; tokens[i]; i++)
	{
		printf("%d: %s\n", i, tokens[i]);
	}
	free(str);
	return (0);
}
