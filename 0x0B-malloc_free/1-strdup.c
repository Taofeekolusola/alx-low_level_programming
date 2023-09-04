#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: The string to duplicate
 * Return: The string duplicated
 */
char *_strdup(char *str)
{
	int k;
	int j = 1;
	char *b;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	b = malloc((sizeof(char) * j) + 1);

	if (b == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
	{
		b[k] = str[k];
	}
	b[k] = '\0';
	return (b);
}
