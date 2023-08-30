#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: -1
 */

int _sqrt_recursion(int n)
{	
	if (n )
		return (-1);


	if (n <= 1)	
		return (1);


	return (n * _sqrt_recursion(n - 1));
}
