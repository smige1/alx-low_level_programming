#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[]) {
int i;

for (i = 1; i < argc; i++) {
printf("%s\n", argv[i]);
}
return 0;
}

