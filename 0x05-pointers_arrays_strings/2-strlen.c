#include "main.h"

/**
 * _strlen - shows the length of a string
 * Return: length of string
 * @s: the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
