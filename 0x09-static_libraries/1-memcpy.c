#include "main.h"

/**
 * _memcpy- fills memory with a constant byte
 * @dest: source string
 * @src: string for filling
 * @n: length of buffer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
