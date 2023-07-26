#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int id;
	int srclen;

	id = 0;
	srclen = 0;

	while (src[id++])
		srclen++;

	for (id = 0; src[id] && id < n; id++)
		dest[id] = src[id];

	for (id = srclen; id < n; id++)
		dest[id] = '\0';

	return (dest);
}
