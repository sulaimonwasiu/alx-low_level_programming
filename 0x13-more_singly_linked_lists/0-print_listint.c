#include "lists.h"

/**
 * print_listint - prints elements of linked list
 * @h: pointer to head of list.
 *
 * Return: n the number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
