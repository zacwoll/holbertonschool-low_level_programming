#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - adds two ints
  * @a: left int
  * @b: right int
  * Return: int, sum of ints
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two ints
  * @a: left int
  * @b: right int
  * Return: int, difference of ints
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two ints
  * @a: left int
  * @b: right int
  * Return: int, product of ints
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two ints
  * @a: left int
  * @b: right int
  * Return: int, quotient of ints
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_add - mods two ints
  * @a: left int
  * @b: right int
  * Return: int, remainder of integer division
  */
int op_mod(int a, int b)
{
	return (a % b);
}
