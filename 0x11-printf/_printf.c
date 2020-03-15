#include "holberton.h"
/**
  * num_flag - counts number of flags total
  * @term: our format tag
  * Return: int, number of flags
  */
int num_flags(char *term)
{
	const char *FLAGS = "+- 0123456789.#lh";
	int i = 0, j = 0;

	while(FLAGS[i])
	{
		if (FLAGS[i] == term[j])
		{
			i = 0;
			j++;
		}
		i++;
	}
	return j;
}

flags_t init_flags(flags_t flags)
{
	flags.flags = " +-0#";
	size = 5;
	i = 0;

	for (; i < size; i++)
	{
		flags.values[i] = 0;
	}
	return (flags);
}

out_f_t init_out_flags(out_f_t out_flags)
{
	out_flags.has_ast = 0;
	out_flags.num = 0;
}

void set_flags(char *term, int size, flags_t flags)
{
	char *OUTPUT = "123456789";
	char *SIZE = "lh";
	char *type = "%bcdioprRsSuxX";
	int i, j;
	
	/* this section counts up the flags */
	/* if any flag int is 2 after this we need to throw an error */
	/* I haven't yet worked out input checking */
	for (i = 0; flags.flags[i]; i++)
	{
		if (flags.flags[i] == *term)
		{
			flags.flags[i] += 1;
			i = 0;
			term++;
		}
	}
	for (i = 0; flags.flags[i]; i++)
	{
		if (flags.flags[i] > 1)
			;/* stop, error time */
	}
	/* [flags] is taken care of */

	/* [width] */

	/* [prec] */

	/* [length] */

	/* type fnc switchboard */
}

int _printf(const char *format, ...)
{
	/* declarations */
	va_list ag;
	int buf_idx, i, j;
	char *buffer, *temp;
	spec_t specs[] = 
	{
		{'d', print_d},
		{'i', print_d},
		{'c', print_c},
		{'s', print_str},
		{NULL, NULL}
  	}
	flags_t flags;
	/* place characters into buffer one at a time */
	/* if we ever hit BUFSIZE this way, write buffer */
	int BUFSIZE = 1024;

	/* input and malloc */
	if (!format)
		return (-1);
	else
		buffer = malloc(sizeof(char) * BUFSIZE);
	if (!buffer)
		return (-1);

	/* begin looping through format string */
	va_start(ag, format);
	flags = init_flags(flags);
	buf_idx = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			/* It's a %tag, j is length to type */
			j = num_flags(format + i + 1);
			flags = setflags(format + i + 1, j);
			i += j + 1; /* format[i] needs to point to the type now */
			/* retrieve the converted string */
			for (j = 0; specs[j]; j++)
			{
				if (format[i] == specs[j].s)
				{
					temp = specs[j].f(ag, flags);
					break;
				}
			}
			/* put converted string into buffer */
			for (j = 0; temp[j]; j++, buf_idx++)
			{
				buffer[buf_idx] = temp[j];
				if (buf_idx == BUF_SIZE)
				{
					write(1, buffer, buf_idx);
					buf_idx = 0;
				}
			}
		}
		else
		{
			/* Not a %tag, add to buffer */
			buffer[buf_idx] = format[i];
			buff_idx++;
			/* if the buffer is full, print and flush it */
			if (buf_idx == BUFSIZE)
			{
				write(1, buffer, buf_idx);
				buf_idx = 0;
			}
		}
		i++;
	}
	if (buf_idx == BUFSIZE)
	{
		write(1, buffer, buf_idx);
		buffer[0] = '\n'
		buf_idx = 1;
	}
	write(1, buffer, buf_idx);
}
