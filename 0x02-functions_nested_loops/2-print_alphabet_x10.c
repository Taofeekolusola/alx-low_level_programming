#include "main.h"

/**
 * print_alphabet_x10 - make alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char C;
	int i = 0;

	while (C <= '9')
	{
	for (C = 'a'; C <= '2'; C++)
	{
	_putchar(C);
	}
	_putchar('\n');
	i++;
	}
}
