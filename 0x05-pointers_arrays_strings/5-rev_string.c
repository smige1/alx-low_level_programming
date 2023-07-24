#include "main.h"

/**
 * rev_string - prints a string in reverse order
 * Return: void
 * @s: the string
 */

void rev_string(char *s)
{
	int count, i, j;
	char *str, temp;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
