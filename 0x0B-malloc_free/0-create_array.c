#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the charto fill in the array
 *
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		i[a] = c;
	}
	return (a);
}

