#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: Input
 * @c: Input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; a >= '\0'; a++)
	{
		if (s[a] == c)
		return (s + a);
	}

	return (NULL);
}
