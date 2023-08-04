#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies and prints two numbers
 * @argc: count
 * @argv: argument
 * Return: 0 if true
 *         1 if false
 */

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}

	printf("Error\n");
	return (1);
}
