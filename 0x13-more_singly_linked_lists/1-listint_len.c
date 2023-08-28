#include "lists.h"

/**
 * listint_len - function that return of elements.
 *
 * @h: pointing the first node
 *
 * Return: return nos of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t elmt = 1;

	/*return 0 when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count elements*/
		if (h->n != '\0')
			elmt++;

		/* next node*/
		h = h->next;
	}

	return (elmt);
}
