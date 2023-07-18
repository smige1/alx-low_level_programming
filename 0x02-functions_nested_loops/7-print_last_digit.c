#include "main.h"

/**
 * print_last_digit - entry point
 * @c: the number
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	int last;

	last = 0;

	last = c % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');

	return (last);
}
