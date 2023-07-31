#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list free
 */
void free_listint2(listint_t **head)
{
	listint_t *swap;

	if (*head == NULL)
		return;

	while (*head)
	{
		swap = (*head)->next;
		free(*head);
		*head = swap;
	}

	*head = NULL;
}
