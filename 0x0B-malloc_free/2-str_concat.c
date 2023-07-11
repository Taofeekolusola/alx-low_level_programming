#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings of any size
 * @s1: the 1st string to concatenate
 * @s2: the second sttring to concatenate
 * Return: the two string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	j = a + b;
	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	b = 0;
	while (i < j)
	{
		if (i <= j)
			s[i] = s1[i];

		if (i >= a)
		{
			s[a] = s2[b];
			b++;
		}

		i++;
	}

	s[i] = '\0';
	return (s);
}
