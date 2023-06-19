#include <stdio.h>
#include <stdlib.h>

/**
 * main - single digit numbersof base 10
 * Return: Alwayas 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
