#include "main.h"

/**
 * _islower - entry point
 * @c: input character
 * Return: if character is lower case returns 1 if not 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
