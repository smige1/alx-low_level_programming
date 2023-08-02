#include "main.h"

/**
 * _pow_recursion - calculates x raised to y
 * @x: the number to be raised
 * @y: the power
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
