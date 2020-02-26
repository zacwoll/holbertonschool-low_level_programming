#include "holberton.h"

/**
  * is_prime - recursively determines if number is prime
  * @n: returns if n is prime or not
  * @i: iterator to track down the primality of n
  * Return: int, 1 if true, 0 if false
  */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}

/**
  * is_prime_number - determines if number is prime
  * @n: determine if n is prime
  * Return: int, 1 if true, 0 if false
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
