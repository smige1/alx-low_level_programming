#include <stdio.h>
/**
* main -print _putchar
* is writen by smige
* return: 0
*/

void times_table(void) {
int i;
int j;

for (i = 0; i <= 9; i++) {
for (j = 0; j <= 9; j++) {
printf("%d, ", i * j);
}
printf("\n");
}
}
