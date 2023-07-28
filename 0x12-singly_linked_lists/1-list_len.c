#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - display number o element of a list
 * @h: linked list
 * Return: number of element of a list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
