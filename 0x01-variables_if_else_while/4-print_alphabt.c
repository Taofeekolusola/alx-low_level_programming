#include <stdio.h>
#include <stdlib.h>

/**
 * main - All alphabet without q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	ch++;
	}
putchar('\n');
return (0);
}
