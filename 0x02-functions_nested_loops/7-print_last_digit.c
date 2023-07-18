#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number
*
* @n: The number to print the last digit of
*
* Return: The last digit of n
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
