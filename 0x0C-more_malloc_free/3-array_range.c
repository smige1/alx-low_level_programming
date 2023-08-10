#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int lower, int higher)
{
	int *ptr;
	int y, size;

	if (lower > higher)
		return (NULL);

	size = higher - lower + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (y = 0; lower <= higher; y++)
		ptr[y] = lower++;

	return (ptr);
}
