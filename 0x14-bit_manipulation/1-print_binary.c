#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the binaries to be printed
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int a, plus_plus = 0;
	unsigned long int present;

	for (a = 63; a >= 0; a--)
	{
		present = n >> a;

		if (present & 1)
		{
			_putchar('1');
			plus_plus++;
		}

		else if (plus_plus)
		{
			_putchar('0');
		}
	}

	if (!plus_plus)
		_putchar('0');
}
