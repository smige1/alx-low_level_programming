#include "main.h"

/**
 * _strchr - locates a character in a stirng
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');

}
