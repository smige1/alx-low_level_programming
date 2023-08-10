#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @u1: first char
 * @u2: secound char
 * @p: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *u1, char *u2, unsigned int p)
{
	unsigned int x, y, z;
	char *s;

	if (u1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; u1[x]; ++x)
		;
	}
	if (u2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; u2[y]; ++y)
		;
	}
	if (y > p)
		y = p;
	s = malloc(sizeof(char) * (x + y + 1));
	if (u == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		u[z] = u1[z];
	for (z = 0; z < y; z++)
		u[z + x] = u2[z];
	s[x + y] = '\0';
	return (u);
}

