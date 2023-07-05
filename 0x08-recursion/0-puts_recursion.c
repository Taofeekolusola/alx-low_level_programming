#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: The string to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_puts_recursion(s);
	_putchar(*s);
	s++;
	_putchar('\n');
}
