#include "lists.h"

/**
 * pop_listint - formating the head
 * @head: pointing to the first element
 *
 * Return: return node data(int n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (value);
}
