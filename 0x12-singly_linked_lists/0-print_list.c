#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
			{	
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
				count++;
		}
	return (count);
}
