#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: The string to duplicate
 * Return: The string duplicated
 */
char *_strdup(char *str)
{
	int i = 0;
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

	while (i < j)
	{
		b[i] = str[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
