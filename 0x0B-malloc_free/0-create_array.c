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
	unsigned int i = 0;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	while (i < size)
	{
		i[a] = c;
		i = i + 1;
	}
	return (a);
}
