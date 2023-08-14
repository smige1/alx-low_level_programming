#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @my_dog: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *my_dog, char *name, float age, char *owner)
{
if (my_dog)
{
my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;
}
}
