#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @my_dog: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *my_dog)
{
	if (my_dog != NULL)
	{
		if (my_dog->name != NULL)
		printf("Name: %s\n", my_dog->name);
		else
		printf("Name: (nil)\n");
		printf("Age: %.6f\n", my_dog->age);
		if (my_dog->owner != NULL)
		printf("Owner: %s\n", my_dog->owner);
		else
		printf("Owner: (nil)\n");
	}
}
