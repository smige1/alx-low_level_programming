#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @members: number of members
 * @size: size of each member
 * Return: pointer
 */

void *_calloc(unsigned int members, unsigned int size)
{
	unsigned int x;
	char *ptr;

	if (members== 0 || size == 0)
		return (NULL);

	ptr = malloc(members * size);

	if (ptr == NULL)
		return (NULL);


	for (x = 0; x < (members * size); x++)
	{
		ptr[x] = 0;
	}

	return (ptr);
}
