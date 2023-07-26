#include "main.h"

/**
 * rot13 - encodes a string to rot13
 * Return: str
 * @str: the string
 */

char *rot13(char *str)
{
	int i;
	int j;
	char str1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}

	return (str);
}
