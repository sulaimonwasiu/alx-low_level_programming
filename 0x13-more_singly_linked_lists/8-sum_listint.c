#include "lists.h"

/**
 * sum_listint - sums all the data(n) of the linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: 0 if list is empty and sum of the elements in the list otherwise
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
