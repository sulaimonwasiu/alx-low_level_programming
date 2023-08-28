#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: pointer to the first node on the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;

	current = *head;

	/** check if last node **/
	while (current != NULL)
	{
		/** copy address of next node to pointer **/
		next = current->next;

		/** free current node **/
		free(current);

		/** make the next node pointer the current node **/
		current = next;
	}

	*head = NULL;
}
