#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	dlistint_t *current = *h;

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
		return (NULL);
	return (add_dnodeint(&(current->next), n));
}
