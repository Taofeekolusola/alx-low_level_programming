#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * free_listint_safe - frees nodes
 * print_listint_safe - parameter to be counted
 * @h: head
 *
 * Return: If the list is not looped - 0, else the number of unique nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *tort, *are;
	size_t nodes = 1;

	if (*head == NULL || *head->next == NULL)
		return (0);

	tort = *head->next;
	are = (*head->next)->next;

	while (are)
	{
	if (tort == are)
	{
		tort = *head;
	while (tort != are)
	{

		nodes++;
		tort = tort->next;
	}

	tort = tort->next;
	while (tort != are)
	{
		nodes++;
		tort = tort->next;
	}

	return (nodes);
	}

	tort = tort->next;
	are = (are->next)->next;

	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
		size_t nodes, index = 0;

		nodes = looped_listint_len(head);

		if (nodes == 0)
		{
			for (; head != NULL; nodes++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
		}

		else
		{
			for (index = 0; index < nodes; index++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}


			printf("-> [%p] %d\n", (void *)head, head->n);
		}

		return (nodes);
}
