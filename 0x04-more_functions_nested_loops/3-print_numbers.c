#include "main.h"

/**
 * print_numbers - prints the result of zero to nine
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
	
}
