#include <stdio.h>
/**
* print_alphabet_x10 - prints 10 times the alphabet,
* followed by a new line
*
* Return: void
*/

void print_alphabet_x10(void)

{
	int i;
	char ch;
	i = 0;

		while (i < 10)
		{
		ch = 'a';
	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	i++;
}
}
