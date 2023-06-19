#include <stdio.h>
#include <stdlib.h>

/**
 *  main - letter in upper and lower case
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}

