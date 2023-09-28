#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, plus_plus = 0;
	unsigned long int present;
	unsigned long int exc = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		present = exc >> a;
		if (present & 1)
			plus_plus++;
	}

	return (plus_plus);
}

