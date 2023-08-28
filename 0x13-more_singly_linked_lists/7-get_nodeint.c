#include "lists.h"

/**
 * get_nodeint_at_index -index nth from a linked list
 *
 * @head: pointing the first node of the list
 * @index: access node
 *
 * Return: return node at nth index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	/*iterate thorugh nodes in list till the nth node*/
	for (z = 0; z < index && head != NULL; z++)
		head = head->next;

	/*return head*/
	return (head);
}
