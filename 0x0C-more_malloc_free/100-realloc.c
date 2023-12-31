#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 * Return: ...
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrn;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptrn = malloc(new_size);

		if (ptrn == NULL)
			return (NULL);

		return (ptrn);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptrn = malloc(new_size);

	if (ptrn == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		ptrn[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (ptrn);
}
