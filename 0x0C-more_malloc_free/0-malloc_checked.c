#include <stdlib.h>
#include <stdio.h>
#include <limits.hf>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *u;

	u = malloc(b);
	if (u == NULL)
		exit(98);
	return (u);

}
