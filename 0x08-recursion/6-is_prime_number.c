#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input
 * Return: -1
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (1);

	if (n % 2 != 0)
		return (0);

	return (n * is_prime_number(n - 1));
}
