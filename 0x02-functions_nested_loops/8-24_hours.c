#include <stdio.h>
/**
* jack_bauer - prints the 24-hour clock
*
* Return: void
*/

void jack_bauer(void) {
int hours;
int minutes;

for (hours = 0; hours <= 23; hours++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
printf("%02d:%02d\n", hours, minutes);
}
}
}
