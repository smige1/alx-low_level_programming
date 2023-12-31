#include "main.h"

/**
 * binary_to_uint - converts a binary numbe
 *
 * @b: binary
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int qq;
	int len, base_two;

	if (!b)
		return (0);

	qq = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			qq += base_two;
		}
	}

	return (qq);
}
