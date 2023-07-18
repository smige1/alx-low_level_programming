#include <stdio.h>
/**
* times_table - prints the multiplication table
*
* Return: void
*/

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		putchar('0');

		for (j = 1; j <= 9; j++)
		{
			putchar(',');
			putchar(' ');

			prod = i * j;

			if (prod <= 9)
				putchar(' ');
			else
				putchar((prod / 10) + '0');
			putchar((prod % 10) + '0');

		}
		putchar('\n');
	}
}
