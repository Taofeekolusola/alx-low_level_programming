#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: the head of the list
 * @index: the index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1;
	dlistint_t *temp2;
	unsigned int a;

	temp1 = *head;

	if (temp1 != NULL)
		while (temp1->prev != NULL)
			temp1 = temp1->prev;

	a = 0;

	while (temp1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = temp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp1->next;

				if (temp1->next != NULL)
					temp1->next->prev = temp2;
			}

			free(h1);
			return (1);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		a++;
	}

	return (-1);
}
