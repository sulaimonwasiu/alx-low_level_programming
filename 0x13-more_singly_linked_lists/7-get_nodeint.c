#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to node 0
 * @index: the nth node to be gotten
 *
 * Return: return the nth node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (current)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
