#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of the element
 *
 * @head: The pointer to the head of the list
 * @str: The string to be added to the list
 *
 * Return: The address of the new node, or NULL if the allocation failed
 */

list_t *add_node(list_t **head, const char *str) {
list_t *new_node;
list_t *result;

new_node = malloc(sizeof(list_t));
if (new_node == NULL) {
return NULL;
}

new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;

result = *head;

return result;
}
