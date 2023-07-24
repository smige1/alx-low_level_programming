#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * Return: void
 * @s: the string
 */

void print_rev(char *s)
{
	int count;
	int i;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
