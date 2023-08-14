#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int j, l, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	for (j = 0; name[j]; j++);
	j++;
	dog.name = malloc(j * sizeof(char));
	if (dog.name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	dog.name[k] = name[k];
	dog.age = age;
	for (l = 0; owner[l]; l++);
	l++;
	dog.owner = malloc(strlen(owner) + 1);
	if (dog.owner == NULL)
	{
		free(dog.name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l; i++)
	dog.owner[i] = owner[i];
	return (dog);
}
