#include "main.h"

/**
 * swap_int - receives two integers and swaps them
 * Return: void
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
