#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char **argv) {
  int i;

  if (argc > 0) {
    for (i = 1; i < argc; i++) {
      if (!strstr(argv[i], "unsafe")) {
        printf("%s\n", argv[i]);
      }
    }
  }

  return 0;
}

