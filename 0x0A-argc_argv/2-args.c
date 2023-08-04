#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int count;
	i = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}

	return (0);
}
