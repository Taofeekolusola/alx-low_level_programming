#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *swap;

	while (head)
	{
		swap = head->next;
		free(head);
		head = swap;
	}
}
