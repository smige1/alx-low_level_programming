#include <stdio.h>
/**
* main -print _putchar
* is writen by smige
* return: 0
*/

void jack_bauer(void) {
int hours;
int minutes;

for (hours = 0; hours <= 23; hours++) {
for (minutes = 0; minutes <= 59; minutes++) {
printf("%02d:%02d\n", hours, minutes);
}
}
}
