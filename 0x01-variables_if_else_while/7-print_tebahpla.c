#include <stdio.h>
#include <stdlib.h>

/**
 * main - alphat from z-a
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
