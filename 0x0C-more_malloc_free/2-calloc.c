#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @boyz: number of members
 * @size: size of each member
 * Return: pointer
 */

void *_calloc(size_t boyz, size_t size)
{
	unsigned int x;
	char *ptr;

	if (boyz== 0 || size == 0)
		return (NULL);

	ptr = malloc(boyz * size);

	if (ptr == NULL)
		return (NULL);


	for (x = 0; x < (boyz * size); x++)
	{
		ptr[x] = 0;
	}

	return (ptr);
}
