#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)

  /* Loop through each bit in the number, starting from the MSB.*/
{
        if (n > 1)
                print_binary(n >> 1);
    /* Get the current bit.*/

	_putchar((n & 1) + '0');
}
