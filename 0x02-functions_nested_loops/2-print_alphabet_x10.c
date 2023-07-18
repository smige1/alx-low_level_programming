#include <stdio.h>
/**
*main -print _putchar
*is writen by smige
*return: 0
*/

void print_alphabet_x10(void) {
	int i;
	char ch;
	i = 0;
		while (i < 10) {
		ch = 'a';
	while (ch <= 'z') 
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	i++;
}
}
