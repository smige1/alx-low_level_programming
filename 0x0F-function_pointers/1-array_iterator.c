#include "function_pointers.h"

/**
 * array_iterator - a function given as a
 * parameter on each element of an array.
 *
 * @arr: array to execute func on
 * @size: is the size of the array
 * @action:  is a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *arr, int size, void (*action)(int))
{
	int i;

	if (arr && action)
	{
		i = 0;
		while (i < size)
		{
		action(arr[i]);
			i++;
		}
	}
}
