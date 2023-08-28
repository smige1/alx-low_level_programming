#include "lists.h"

/**
 * sum_listint - sums all the data together
 * @head: pointer to the first element
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
