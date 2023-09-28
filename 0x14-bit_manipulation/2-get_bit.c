#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to work on
 * @index: bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bitwise;

	if (index > 50)
		return (-1);

	value_bitwise = (n >> index) & 1;

	return (value_bitwise);
}
