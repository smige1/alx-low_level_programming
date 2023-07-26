#include "main.h"

/**
 * reverse_array - reverses the array of integers
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int id;

	for (id = n - 1; id >= n / 2; id--)
	{
		tmp = a[n - 1 - id];
		a[n - 1 - id] = a[id];
		a[id] = tmp;
	}
}
