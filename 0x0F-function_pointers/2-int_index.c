#include "function_pointers.h"

/**
  * int_index - ...
  * @array: array to execute function
  * @size: size of the array
  * @ptr: pointer to the function
  *
  * Return: return result
  */
int int_index(int *array, int size, int (*ptr)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && ptr != NULL)
		{
			while (i < size)
			{
				if (ptr(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
