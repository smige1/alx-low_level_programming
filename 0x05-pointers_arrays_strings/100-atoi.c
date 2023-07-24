#include "main.h"

/**
 * _atoi - converts a string to integer
 * Return: an interger
 * @s: string
 */

int _atoi(char *s)
{
	unsigned int count;
	unsigned int size;
	unsigned int oi;
	unsigned int pn;
	unsigned int m;
	unsigned int i;

	count = 0;
	size = 0;
	oi = 0;
	pn = 1;
	m = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
