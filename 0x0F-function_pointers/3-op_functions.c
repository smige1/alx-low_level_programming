#include "3-calc.h"

/**
 * op_add - adds two numbers
 *
 * @x: first integer
 * @y: second integer
 * Return: result
 */

int op_add(int x, int y)
{
	return (x + y);
}


/**
 * op_sub - substract two numbers
 *
 * @x: first integer
 * @y: second integer
 * Return: result
 */


int op_sub(int x, int y)
{
	return (x - y);
}


/**
 * op_mul - multiplies two numbers
 *
 * @x: first integer
 * @y: second integer
 * Return: result
 */


int op_mul(int x, int y)
{
	return (x * y);
}


/**
 * op_div - divides two numbers
 *
 * @x: first integer
 * @y: second integer
 * Return: result
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
 * @x: first integer
 * @y: second integer
 * Return: modulo
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
