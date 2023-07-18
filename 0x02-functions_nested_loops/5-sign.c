#include "main.h"

/**
 * print_sign - entry point
 * @n: the number to be determined
 * Return: 1 if n is positive
 * 0 if n is zero and
 * -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
