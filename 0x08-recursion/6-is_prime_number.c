#include "main.h"
int real_prime(int n, int a);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input
 * Return: -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int a)
{
	if (a == 1)
		return (1);

	if (n % a == 0 && a > 0)
		return (0);

	return (real_prime(n, a - 1));
}
