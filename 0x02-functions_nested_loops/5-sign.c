#include <stdio.h>
/**
* main -print _putchar
* is writen by smige
* return: 0
*/

int print_sign(int n) {
if (n > 0) {
putchar('+');
return 1;
} else if (n == 0) {
putchar('0');
return 0;
} else {
putchar('-');
return -1;
}
}