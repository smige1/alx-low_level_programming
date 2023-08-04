#include "main.h"

/**
 * _isdigit - checks if c is digit
 * @c: the digit
 * Return: 1 if it is digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}