#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: the root linked list
 * @str: the string to add
 * Return: the address of the new list or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int leng = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[leng])
		leng++;

	temp->len = leng;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
