#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Element end of the list
 * @head: Elemet pointer
 * @str:Element string values
 *
 * Return: Element Address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t p;

	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

			new_node->str = strdup(str);

			for (p = 0; str[p]; p++);

		new_node->len = p;
		new_node->next = NULL;
		current_node = *head;

				if (current_node == NULL)
		{	
			*head = new_node;
		}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
