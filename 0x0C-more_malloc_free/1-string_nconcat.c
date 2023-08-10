#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @v1: first char
 * @v2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *v1, char *v2, unsigned int n)
{
	unsigned int x, y, z;
	char *v;

	if (v1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; v1[x]; ++x)
		;
	}
	if (v2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; v2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	v = malloc(sizeof(char) * (x + y + 1));
	if (v == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		v[z] = v1[z];
	for (z = 0; z < y; z++)
		v[z + x] = v2[z];
	v[x + y] = '\0';
	return (v);
}
