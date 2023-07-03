#include <stdio.h>
#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: input
 * @c: input
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
