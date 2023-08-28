#include "lists.h"

/**
 * add_nodeint_end - adds a node list
 * @head: points to the pointer head
 * @n: data to populate 
 *
 * Return: address of the new elements
 */
listint_t *add_nodeint_end(listint_t **head, const int z)
{
	listint_t *current;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->z = z;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
