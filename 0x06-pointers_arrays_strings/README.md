# 0x06. C - More pointers, arrays and strings
A continuation of [0x05 pointers, arrays and strings]().

#### [0. strcat](./0-strcat.c)
* Write a function that concatenates two strings.
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.
```
#include "holberton.h"

/**
  * _strcat - combines two strings
  * @dest: destination string
  * @src: source string
  * Return: char pointer
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = *src;

	return (p);
}
```
I've opted to solve this problem using pointer notation instead of array notation. Thus, I created a copy of the dest pointer at it's beginning position, then I will use one of them for the logic. The logic of the problem is simply while the dest pointer dereferences to a non-null character, iterate dest. Now that dest points to it's final character, begin appending src characters to it, terminating at src's null character. Finally, add the null character to the end of the now-concatenated string. Return the copy of the dest pointer, called 'p'.

#### [1. strncat](./1-strncat.c)
* Write a function that concatenates two strings.
Same as the strcat function, but utilizing n bytes.
```
#include "holberton.h"
/**
  * _strncat - concatenate strings up to n bytes
  * @dest: destination string
  * @src: source string
  * @n: size of copy
  * Return: char pointer of destination
  */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest)
	{
		dest++;
	}

	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest++ = *src++;
		}
		else
		{
			*dest = '\0';
			break;
		}
	}

	return (p);
}
```
To keep up variety, I've switched to using a while loop to move the dest pointer to it's null pointer position. Then simply for each n, place src[n] into dest starting at that position.

#### [2. strncpy](./2-strncpy.c)
* Write a function that copies a string.
Instead of concatenation, copy n characters of a string into a destination string. For overflow, we continue writing in null bytes up to n.
```
#include "holberton.h"

/**
  * _strncpy - copys n characters of a string into a destination
  * @dest: destination string
  * @src: source string
  * @n: size of copy operation
  * Return: char pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest++ = *src++;
		}
		else
		{
			*dest++ = '\0';
		}
	}

	return (p);
}
```
Previously, when we found the end of the src string, we finished the operation of the program. Now that we want to continue operating for all of n, we simply remove our break and continue placing in null bytes.


#### [3. strcmp](./3-strcmp.c)
* Write a function that compares two strings.
In this function I compare every character of each string and once there is a difference, stop and return the difference in ascii.
```
/**
  * _strcmp - compares the values of two strings left to right
  * @s1: string 1
  * @s2: string 2
  * Return: int, first difference in ascii values
  */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2)
	{
		diff = *s1++ - *s2++;
		if (diff != 0)
			return (diff);
	}
	return (diff);
}
```
While both of the pointers dereference to non-null characters, determine if the two character they dereference to are the same character.


#### [4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](./4-rev_array.c)
* Write a function that reverses the content of an array of integers.
This function has a parameter defining the size of array as n. We can set a new pointer to the end of the array using `int *end = &a[n - 1]`. Using two pointers, while the first ptr has a memory address value less than end, we can switch the values using a temporary third variable, temp.
```
/**
  * reverse_array - reverses an array
  * @a: pointer to array
  * @n: size of array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int temp;
	int *end = &a[n - 1];

	while (a < end)
	{
		temp = *a;
		*a++ = *end;
		*end-- = temp;
	}
}
```
At the end of this function, every character before the halfway mark will become the reverse of every character after, and vice versa.

#### [5. Always look up](./5-string_toupper.c)
* Write a function that changes all lowercase letters of a string to uppercase.
This function uses the property of the distance between lower case and uppercase characters in the ascii table to set a character to it's uppercase equivalent iff it's able to.
```
char *string_toupper(char *c)
{
	char *p = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 'a' - 'A';
		c++;
	}
	return (p);
}
```

#### [6. Expect the best. Prepare for the worst. Capitalize on what comes](./6-cap_string.c)
* Write a function that capitalizes all words of a string.
This function finds the words of a string by defining a list of delimiters.

```
char *cap_string(char *c)
{
	char *p = c;
	char *sep = " \t\n,;.!?\"(){}";
	int i = 0;

    /* Loop while *c dereferences to a non-null character */
	for (; *c; c++)
	{
        /* Loop for every delimeter in sep
		for (i = 0; sep[i]; i++)
		{
            /* if c is a delimeter and c + 1 is a lowercase character
			if (*c == sep[i] && *c + 1 >= 'a' && *c + 1 <= 'z')
            {
                /* set *c to a capital version of itself */
                *c + 1 -= 'a' - 'A';
                /* advance c one character (it will be advanced again after break)
                c++;
                /* and continue looping (break back to outer loop)*/
                break;
            }
		}
	}
	return (p);
}
```
We need to loop for the length of c, I chose to use ptr notation to do that, utilizing array notation instead would result in changing all *c to c[index] and *c + 1 to c[index + 1]. For every character, I want to check if it's a delimeter, if I were doing this code again, this is what I would extract ito it's own function.

#### [7. Mozart composed his music not for the elite, but for everybody](./7-leet.c)
* Write a function that encodes a string into 1337.


#### [8. rot13](./8-rot13.c)
* Write a function that encodes a string using rot13.


#### [9. Numbers have life; they're not just symbols on paper](./100-print_number.c)
* Write a function that prints an integer.


#### [10. A dream doesn't become reality through magic; it takes sweat, determination and hard work](./101-magic.c)
*

Add one line to this code, so that the program prints a[2] = 98, followed by a new line.


#### [11. It is the addition of strangeness to beauty that constitutes the romantic character in art](./102-infinite_add.c)
* Write a function that adds two numbers.


#### [12. Noise is a buffer, more effective than cubicles or booth walls](./103-print_buffer.c)
* Write a function that prints a buffer.

---

## Author
* **Zac Woll** - [zacwoll](github.com/zacwoll)