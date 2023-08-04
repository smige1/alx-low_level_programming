#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * Return: dest
 * @src: string one
 * @dest: string tw0
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
