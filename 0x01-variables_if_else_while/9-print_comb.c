#include <stdio.h>

/**
 * main -Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i, j;

  for (i = 0; i <= 9; i++)
  {
    for (j = 0; j <= 9; j++)
    {
      if (i < j)
      {
        putchar(i + '0');
        putchar(j + '0');
        if (i != 9 || j != 8)
        {
          putchar(',');
          putchar(' ');
        }
      }
    }
  }
  putchar('\n');
  return (0);
}

