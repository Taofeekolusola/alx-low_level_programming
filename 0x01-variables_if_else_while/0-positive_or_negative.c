#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that assign random value to n each time it is executed
 *
 * return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if  (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
