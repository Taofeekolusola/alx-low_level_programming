#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: The integer to be used
 * Return: The length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
