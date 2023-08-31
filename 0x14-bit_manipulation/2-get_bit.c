#include "main.h"

/**
 * get_bit - value of a bit at a given index.
 * @n: The bit.
 * @index: The indices start at 0.
 *
 * Return: If an error occurs-1.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
/* Check if the index is valid.*/
if (index >= sizeof(unsigned long int) * 8)

return (-1);


/* Create a mask with the bit at the specified index set to 1.*/
if ((n & (1 << index)) == 0)
		return (0);
	/* Shift the mask to the left by the specified index.*/
return (1);
}
