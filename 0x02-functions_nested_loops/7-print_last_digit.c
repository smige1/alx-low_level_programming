#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number
*
* @n: The number to print the last digit of
*
* Return: The last digit of n
*/

int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
putchar(last_digit + '0');
return (last_digit);
}
