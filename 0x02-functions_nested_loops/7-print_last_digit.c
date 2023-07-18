#include <stdio.h>
/**
* main -print _putchar
* is writen by smige
* return: 0
*/

int print_last_digit(int n) {
int last_digit;

last_digit = n % 10;
putchar(last_digit + '0');
return last_digit;
}
