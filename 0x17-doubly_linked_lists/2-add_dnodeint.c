#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	newnode->next = temp;

	if (temp != NULL)
		temp->prev = newnode;

	*head = newnode;

	return (newnode);
}
