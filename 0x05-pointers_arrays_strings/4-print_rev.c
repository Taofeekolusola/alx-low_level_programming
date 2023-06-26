#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (a[s] != '\0')
	{
	a++;
	}
	for (a -= 1; a >= 0; a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
}
