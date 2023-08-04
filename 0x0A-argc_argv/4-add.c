#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * chnum - check string
 * @str: array string
 * Return: 0
 */

int chnum(char *str)
{
	unsigned int i;

	i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}

	return (1);
}

/**
 * main - add
 * @argc: count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int stoint;
	int sum;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		if (chnum(argv[i]))
		{
			stoint = atoi(argv[i]);
			sum += stoint;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
