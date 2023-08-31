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
unsigned int q;
  /*Create a mask with the bit at the specified index set to 1.*/
if (index > 63)
		return (-1);

	/* Set the bit at the specified index in n to 1 by using the bitwise.*/
	q = 1 << index;
	*n = (*n | q);

/* Return success.*/
return (1);
}
