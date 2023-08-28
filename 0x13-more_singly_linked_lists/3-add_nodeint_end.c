#include "lists.h"

/**
 * add_nodeint_end - add list to end of node
 * @head: pointer to head of list
 * @n: data in new node
 *
 * Return: pointer to head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *current = *head;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (0);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = p;

	return (*head);
}
