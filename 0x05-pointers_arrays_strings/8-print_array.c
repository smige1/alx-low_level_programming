#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integers
 * Return: void
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
