#include <stdio.h>
#include "main.h"
//A program that capitalizes all words of a string

char *cap_string(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if((str[i] == ' ' || str[i] == '.') ||(str[i] == '\n' || str[i] =='\t'))
		{	i++;
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
			i++;
	}
	return str;
}
