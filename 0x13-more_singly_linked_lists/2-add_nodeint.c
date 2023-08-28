#include "lists.h"

/**
 * add_nodeint - adds a node beginning of the list
 * @head: pointing the first element
 * @n: data of new node
 *
 * Return: return the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
