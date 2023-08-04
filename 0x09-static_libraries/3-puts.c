#include "main.h"

/**
 * _puts - displays a string
 * Return: void
 * @str: the string
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
