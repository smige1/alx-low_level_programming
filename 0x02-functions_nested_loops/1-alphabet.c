#include <stdio.h>
/**
* print_alphabet - prints the lowercase alphabet, followed by a new line
*
* Description: This function prints the lowercase alphabet, followed by a new line.
*
* Return: void
*/

void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
