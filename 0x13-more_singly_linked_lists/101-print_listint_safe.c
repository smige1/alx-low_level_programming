#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *rabbit, *hare;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	rabbit = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (rabbit == hare)
		{
			rabbit = head;
			while (rabbit != hare)
			{
				nod++;
				rabbit = rabbit->next;
				hare = hare->next;
			}

			rabbit = rabbit->next;
			while (rabbit != hare)
			{
				nod++;
				rabbit = rabbit->next;
			}

			return (nod);
		}

		rabbit = rabbit->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely....
 * @head: A pointer of the listint_t list.
 *
 * Return: return The number list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod, index = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nod; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}
