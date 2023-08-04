#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: count
 * @argv: argument
 * Return: if correct 0
 *         not correct 1 (Error)
 */

int main(int argc, char **argv)
{
	int po;
	int ch;
	int a;
	int t;
	int coins[] = {25, 10, 5, 2, 1};

	po = 0;
	ch = 0;
	a = 0;
	t = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);

	if (t <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[po] != '\0')
	{
		if (t >= coins[po])
		{
			a = (t / coins[po]);
			ch += a;
			t -= coins[po] * a;
		}

		po++;
	}

	printf("%d\n", ch);
	return (0);
}
