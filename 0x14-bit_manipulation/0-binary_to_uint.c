#include <stdio.h>
/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: a pointer to string
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int a = 0;

	if (b == NULL)
	return (0);

	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		output = output << 1;
		output = output | (b[a] - '0');
		a++;
	}

	return (output);
}
