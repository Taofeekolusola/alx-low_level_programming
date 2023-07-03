#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int b, n;

	for (b = 0; b < 8; b++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[b][n]);
		_putchar('\n');
	}
}
