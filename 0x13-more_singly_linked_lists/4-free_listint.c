#include "lists.h"

/**
 * free_listint - listint list
 * @head: pointer element of the list
 *
 * Return: return void
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
