#include<stdio.h>
#include <strin

/**
 * main - Entry point
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{       
        char str[] = "Programming is like building a multilingual puzzle";
 	 str = strrtrim(str, "");
 	 puts(str);
  	 return 0;
}       
