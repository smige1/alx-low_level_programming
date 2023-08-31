#include "main.h"

/**
 * set_bit - Sets the value of given index to 1.
 * @n: A pointer to the bit.
 * @index: indices start at 0.
 *
 * Return: If an error occurs -1.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is valid.*/
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}

  /*Create a mask with the bit at the specified index set to 1.*/
	unsigned long int mask = (1 << index);

	/* Set the bit at the specified index in n to 1 by using the bitwise.*/
	*n |= mask;

/* Return success.*/
return (1);
}
