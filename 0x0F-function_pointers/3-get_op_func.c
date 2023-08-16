#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two numbers
  * @x: first integer
  * @y: second integer
  *
  * Return: result
  */
int op_add(int x, int y)
{
	return (x + y);
}

/**
  * op_sub - substract two numbers
  * @x: first integer
  * @y: second integer
  *
  * Return: return result
  */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
  * op_mul - multiply two numbers
  * @x: first integer
  * @y: second integer
  *
  * Return: return result
  */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
  * op_div - divide two numbers
  * @a: first integer
  * @b: second integer
  *
  * Return: return result
  */
int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x / y);
}

/**
  * op_mod - returns a modulo of a number divided by another
  *
  * @a: first integer
  * @b: second integer
  *
  * Return: return result
  */
int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x % y);
}
