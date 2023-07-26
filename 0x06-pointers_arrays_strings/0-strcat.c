#include "main.h"

/**
 * _strcat - concatinates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int id;
	int deslen;

	id = 0;
	deslen = 0;

	while (dest[id++])
		deslen++;
	for (id = 0; src[id]; id++)
		dest[deslen++] = src[id];

	return (dest);
}
