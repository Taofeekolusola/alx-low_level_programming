#include <stdio.h>
#include <stdlib.h>

/**
 *  main - letter in upper and lower case
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch<= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

