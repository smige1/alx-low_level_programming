#include "lists.h"

/**
 * free_listint2 - free sets head to null
 * @head: the list of numbers
 *
 * Return: return void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
