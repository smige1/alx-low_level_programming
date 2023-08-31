#include "main.h"

/**
 * flip_bits - Counts the number of bits needed
 *
 * @n: The num
 * @m: The number to flip n
 *
 * Return: number of bits from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/* Create a variable to store the number of bits that need to be flipped.*/

	unsigned long int xor = n ^ m, bits = 0;

/* Loop through each bit in the numbers.*/
	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
 /* If the bits are different, increment the number of flips.*/
return (bits);
}
