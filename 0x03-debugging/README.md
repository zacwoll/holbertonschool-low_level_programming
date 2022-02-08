# 0x03. C - Debugging
A short exploration of debugging, and debugging problems in C

## Description
### What we learned from this project:
===

### What is debugging?
Debugging issues is a common problem for developers. It's confusing and a little frusterating to be met with an unexpected and/or difficult to find issue. Sometimes it is helpful to ask a peer for a second set of eyes on a problem, but often we should look first to what error messages we are met with first. In C, gcc often represents bugs with:
- inability to compile
- a message indicating the type of bug
- a precise location to begin debugging, given in the format: [filename].c:[line number]:[character in the line]

### What are some methods of debugging manually?
In C, in order to compile, a set of compiled files must include a `main` function. It is at this function that you can begin tracing the actions of the compiler step by step and it is frequently helpful to do so. Understanding where the logic of the problem doesn't line up with the solution takes some grunt work and reflection on what you have. C has the gdb, an effective command-line debugger for C code that takes some research to use. Most modern languages have a 'debugger' that allows you to pause your program in execution and examine the state of the declared variables at any point in the program.

---

#### [0. Multiple mains](./0-main.c)
This program tests the function `void positive_or_negative(int i)` and correctly verifies the input of `98` returns `98 is positive`.
```
#include "main.h"

/**
  * main - tests function that prints if integer is positive or negative
  * Return: 0
  */

int main(void)
{
	int i;

	// Here, I wanted to check the function using 0 instead of 98
	// So I changed i = 98; => i = 0;
	i = 0;
	positive_or_negative(i);

	return (0);
}
```
This task requires that I modify it slightly to test that the input of `0` returns `0 is zero`. This simply requires that I change the line from `i = 98;` => `i = 0;` and then we can verify the return. A slight complication from this task is that the files given are incomplete for compilation. I adapted `0-positive_or_negative.c` from [a previous project (0x01)](https://github.com/zacwoll/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c) to aid in local compilation and testing. This required adapting the file for import into this `0-main.c`
```
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry Point
  * Description: Determines a random number's polarity.
  * Return: 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
```
I removed the time psuedorandom number generator, adjusted the function declaration, and the return from the function for use in the 0-main.c program.
Now it looks like:
```
#include <stdio.h>
/**
  * positive_or_negative - determines a number's polarity
  * Return: 0 (Success)
  */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
}
```
and compilation of the result can now be done with the 0-main.c, 0-positive_or_negative.c, and a main.h header file with the correct prototype (not included in compilation)
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
$ ./0-main
0 is zero
```
And the return is verified, `0 is zero`.

#### [1. Like, comment, subscribe](./1-main.c)
This task has a main file with a bug. For some reason, this main file has an infinite loop before the end of execution (obviously).
```
#include <stdio.h>

/**
  * main - causes an infinite loop
  * Return: 0
  */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
```
Our task is to comment out a block of code allowing the printf statements to both print, and for execution to conclude unimpeded. I chose to simply create a comment block for the while loop.
```
#include <stdio.h>

/**
  * main - causes an infinite loop
  * Return: 0
  */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	// Here I showed what commenting out a block of code looks like
	/*
	while (i < 10)
	{
		putchar(i);
	}
	*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
```
Fun fact, in VS Code, commenting out a line or a block of code is as simple as highlighting all the text that you want commented and using the shortcut, `Ctrl + L`. Anyway, the output of this task is shown below.
```
$ gcc -std=gnu89 1-main.c -o 1-main
$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
```

#### [2. 0 > 972?](./2-largest_number.c)
Another programming bug to solve! These programs attempt to find the largest number of [972, -98, 0] and somehow come up with 0. Let's take a look:
```
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
```
```
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    // This looks like the culprit! The logic here seems off..
    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
```
Running the resulting code returns 0 as the largest number, however, we both know that isn't true! The problem lies in the largest_number function, because the 2-main.c code is mainly driver code anyway. In the `if` statement:
```
if (a > b && b > c)
{
    largest = a;
}
```
They have an error in logic, consider a = 972, b = -98, and c = 0, which is the case given. a is clearly larger than b, and b is clearly not larger than c, so the code moves on to the `else if` and `else` statements. This is because we don't properly compare a to both numbers! If we rewrite the code to
```
if (a >= b && a >= c)
{
    largest = a;
}
```
Then we properly assign a as the largest number, de facto. It turns out the `else if` suffers from the same lack of foresight. So let's repair that too.
```
else if (b >= a && b >= c)
{
    largest = b;
}
```
Now the function can return the largest number as it was originally meant to do.
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
$ ./2-main
972 is the largest number
```


#### [3. Leap year](./3-print_remaining_days.c)
This task presents a new bug, with a slightly more complicated environment. We're given a set of files that is supposed to return the `Day of the Year` and `Days Remaining in the Year` while accounting for `Leap Years`. However, from their output it is clear that the code doesn't work for a valid date, `02/29/2000`, it returns `Invalid date: 02/29/2000`
Let's take a look at the program files and find the problem.
```
$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
```
```
$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        // This is the real catch in this problem, on a Leap Year, Mar. 1 is the same as Feb. 29 in days counted
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
```
```
$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    // Is this how we determine a leap year??
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
```
So we have a lot of code to look through, the `main` file sets a date to be examined, the `convert_days()` function converts the date to the number of days past Dec. 31 of the previous year, and the `print_remaining_days()` function adds an extra day on `leap years`. Let's start with the `Leap Year`. A year is a leap year if it is divisible by 4, but if it is a centennial (100) it must be divisible by 400 (like the year 2000). Or, with a little rewriting, A year is a leap year if it is divisible by 400, or if it is divisible by 4 it must also not be divisible by 100. Let's look at the code.
```
if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
```
This `if` statement allows years that are divisible by 4 `or` 400, if they are also `not` divisible by 100. But wait, aren't all years divisible by 400 *also* divisible by 100?
Let's rewrite this `if` statement the way we just defined the leap year, with every year that is divisible by 400 automatically passing through, and every year divisible by 4 having to check divisibility by 100.
```
if (year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0)))
```
I think this `if` statement will work.

New problem, if this is all the changes we make, `Feb. 02, 2000` now runs, but returns the wrong information.
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
$ ./3-main_a
Date: 02/29/2000
Day of the year: 61
Remaining days: 305
```
Feb. 02 is the *60th* day of the year, not the 61st. But if we were to check Mar. 01, we would notice that *it also returns 61*. This is because `convert_days` passes 31 + day from Feb dates and 59 + day from march dates to our function. So on `leap years` the function is treating them as the same! Furthermore, the code that allows for the '`Leap Day`' works for Mar. 1 to the end of the year, so it's *only* broken for Febuary 2nd. Which brings us to the fix, if we make a code change such that we only affect the date on days past Febuary, we'll avoid the bug! So let's just change `month >= 2` to `month > 2`
And then technically, we don't even need the `day` check.
```
if (month > 2)
{
    day++;
}
```
Now our code should function properly for all days of the years. Let's run it one last time.
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
$ ./3-main_a
Date: 02/29/2000
Day of the year: 60
Remaining days: 306
```
---

## Author
**Zac Woll** - [zacwoll](github.com/zacwoll)