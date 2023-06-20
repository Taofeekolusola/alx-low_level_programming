#include <stdio.h>
#include <stdlib.h>

/**
 * main - three com of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
	for (c = b + 1; c <= '9'; c++)
	{
	if ((b != a) != c)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == '7' && b == '8')
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
