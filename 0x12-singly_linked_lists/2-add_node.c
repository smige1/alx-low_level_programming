#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - new node at the beginning
 * @head: pointer to the first node
 * @str: string to initialize the node
 *
 * Return: The address new element
 */
list_t *add_node(list_t **head, const char *str)
{
		unsigned int len;
			list_t *new_node;

				new_node = malloc(sizeof(list_t));
					if (new_node == NULL)
					return (NULL);
			len = strlen(str);
			new_node->str = strdup(str);
			new_node->len = len;
			new_node->next = *head;
			*head = new_node;
					return (*head);
		}
