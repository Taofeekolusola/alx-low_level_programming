#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: the head of the list
 * @idx: the index of the new node
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;
	unsigned int a;

	new = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		temp = *h;
		a = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (a == idx)
			{
				if (temp->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = temp->next;
						newnode->prev = temp;
						temp->next->prev = newnode;
						temp->next = newnode;
					}
				}
				break;
			}
			temp = temp->next;
			a++;
		}
	}

	return (newnode);
}
