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
	char *b;
	int a, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = k = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[k] != '\0')
		k++;
	b = malloc(sizeof(char) * (a + k + 1));

	if (b == NULL)
		return (NULL);
	a = k = 0;
	while (s1[a] != '\0')
	{
		b[a] = s1[a];
		a++;
	}

	while (s2[k] != '\0')
	{
		b[a] = s2[k];
		a++, k++;
	}
	b[a] = '\0';
	return (b);
}
