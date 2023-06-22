#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the numbner to be checked
 * Return: 1 for positive number, -1 for negative number, 0 for anytging anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}



