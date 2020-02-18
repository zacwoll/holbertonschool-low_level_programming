#include "holberton.h"
#include <stdio.h>

int _atoi(char *s)
{
	char *ele = s;
	int num = 0, negative = 0, is_num = 0;
	
	while (*ele)
	{
		if (*ele == '+')
			negative += 1;
		else if (*ele == '-')
			negative -= 1;

		if (*ele >= '0' && *ele <= '9')
		{
			num *= 10;
			num += *ele - '0';
			is_num = 1;
		}
		else if (is_num)
			break;
		ele++;
	}
	if (negative < 0)
		num = -num;
	return num;
}

int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}
