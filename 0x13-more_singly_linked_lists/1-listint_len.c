#include "lists.h"

/**
 * listint_len - prints number of elements of list
 * @h: pointer to head of list.
 *
 * Return: n the number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
