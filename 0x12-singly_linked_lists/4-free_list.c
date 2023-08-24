#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: the list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
