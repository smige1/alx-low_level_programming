#include "main.h"

/**
 * flip_bits - Counts the number of bits needed
 *
 * @n: The num
 * @m: The number to flip n
 *
 * Return: The necessary number of bits from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
  /* Create a variable to store the number of bits that need to be flipped.*/
  unsigned int flips = 0;

  // Loop through each bit in the numbers.
  for (unsigned int i = 0; i < sizeof(unsigned long int) * 8; i++) {
    /* If the bits are different, increment the number of flips.*/
    if ((n & (1 << i)) != (m & (1 << i))) {
      flips++;
    }
  }

  /* Return the number of flips.*/
  return flips;}
