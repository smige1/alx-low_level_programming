#include "main.h"

/**
 * other_function - checks if the number have sqrt
 * @num: the number
 * @ps: possible sqrt of number
 * Return: ps
 */

int other_function(int num, int ps)
{
	if ((ps * ps) == num)
	{
		return (ps);
	}

	else
	{
		if ((ps * ps) > num)
		{
			return (-1);
		}

		else
		{
			return (other_function(num, ps + 1));
		}
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: sqrt of n
 *         if n do not have sqrt -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (other_function(n, 0));
}
