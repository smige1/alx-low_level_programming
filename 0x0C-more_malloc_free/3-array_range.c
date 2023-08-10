#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @low: minimum range of values stored
 * @high: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int low, int high)
{
	int *ptr;
	int y, size;

	if (low > high)
		return (NULL);

	size = high - low + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (y = 0; lower <= high; y++)
		ptr[y] = low++;

	return (ptr);
}
