#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes ......
 *
 * @head: the address of the pointer
 *
 * @index: node to be deleted - indices 0.
 *
 * Return: On success - 1.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int z;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (z = 0; z < index - 1 && prev != NULL; z++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
