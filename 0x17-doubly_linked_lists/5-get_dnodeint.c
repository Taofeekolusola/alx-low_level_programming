#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list head
 * @index: index of the node to be searched, starting from 0
 * Return: Nth node or Null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp;

	len = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == len)
	return (temp);
	len++;
	temp = temp->next;
	}
	return (NULL);
}
