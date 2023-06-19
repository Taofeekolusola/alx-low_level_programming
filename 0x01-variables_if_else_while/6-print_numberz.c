#include <stdio.h>
#include <stdlib.h>

/**
 * main - all numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
