#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes ......
 *                          
 * @head: the address of the pointer
 *        
 * @index: node to be deleted - indices 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int n;

	if (copy == NULL)
		return (-1);

	if (index == 0)
		{
			*head = (*head)->next;
			free(copy);
			return (1);
		}

	for (n = 0; n < (index - 1); n++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
		}

		tmp = copy->next;
		copy->next = tmp->next;
		free(tmp);
		return (1);
}
