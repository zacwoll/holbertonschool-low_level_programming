#include "holberton.h"

char *print_d(va_list ag, flags_t flags)
{
	/*declarations */
	/* read-in integer / temporary holder of integer */
	long int int_t, temp;
	/* output string */
	char *s;
	/* digits in num / iterator / sign of number */
	int digits = 1, j, sign = 1;
	/* maybe handle longs here */
	int_t = va_arg(ag, int);
	/* how many digits in number */
	temp = int_t;
	while (temp / 10)
	{
		digits++;
		temp /= 10;
	}
	/* number is negative */
	if (int_t < 0)
	{
		sign = -1;
		digits++;
	}
	/* malloc for number */
	s = malloc(sizeof(char) * (digits + 1));
	if (s == NULL)
		return (NULL);

	/* place our number in char *s */
	j = 0;
	if (sign < 0)
		s[j++] = '-';
	while (int_t)
	{
		s[j++] = int_t % 10 * sign + '0';
		int_t /= 10;
	}
	s[j] = '\0';
	return (s);
}

char *print_s(va_list ag, flags_t flags)
{
	char *a = "LOL";

	return a;
}

char *print_c(va_list ag, flags_t flags)
{
	char *a = "LOL";

	return a;
}

