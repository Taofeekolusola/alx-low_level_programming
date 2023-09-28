#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer number to be changed
 * @index: bit index to be cleared
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

