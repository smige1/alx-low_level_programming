#include "function_pointers.h"

/**
  * int_index - ...
  * @array: array to execute function
  * @size: size of the array
  * @ptr: pointer to the function
  *
  * Return: return 1
  */
int int_index(int *arr, int size, int (*ptr)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (arr != NULL && ptr != NULL)
		{
			while (i < size)
			{
				if (ptr(arr[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
