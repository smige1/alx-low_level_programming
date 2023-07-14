#include <stdio.h>

/**
 * main - prints numbers between 0 to 9 and letters between a to f
 * Return: Always 0 (Success)
 */
int main(void)
{
  char ch;

  for (ch = '0'; ch <= '9'; ch++)
  {
    putchar(ch);
  }
  for (ch = 'a'; ch <= 'f'; ch++)
  {
    putchar(ch);
  }
  putchar('\n');
  return (0);
}

