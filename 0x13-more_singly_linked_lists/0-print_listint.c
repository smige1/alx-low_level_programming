#include "lists.h"

/**
 * print_listint - prints all the elements list.
 *
 * @h: to the next element of the list
 * Return: return 1
 */

size_t print_listint(const listint_t *z)
{
	int len = 0;

	while (z != NULL)
	{
		printf("%d\n", z->n);
		len++;
		z = z->next;

	}
	return (len);
}
