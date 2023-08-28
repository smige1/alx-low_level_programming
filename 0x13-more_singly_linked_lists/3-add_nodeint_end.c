#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer that points to the pointer head
 * @n: data to populate the list
 *
 * Return: address of the new element or null if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
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
