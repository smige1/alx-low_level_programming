#include "lists.h"

/**
 * sum_listint - sums data together
 * @head: point first element
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int avrg = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		avrg += current->n;
		current = current->next;
	}
	return (avrg);
}
