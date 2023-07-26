#include "main.h"

/**
 * _strncat - concatinates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes from src to be appended to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int id;
	int deslen;

	id = 0;
	deslen = 0;

	while (dest[id++])
		deslen++;

	for (id = 0; src[id] && id < n; id++)
		dest[deslen++] = src[id];

	return (dest);
}
