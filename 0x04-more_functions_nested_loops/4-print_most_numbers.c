#include "main.h"

/**
 * print_most_numbers -print the numbers since 0 up to 9
 * Description: print the number including 2 and 4
 * Return: the number since 0 up to 9
 */

void print_most_numbers(void)
{
    int i;
    for (i = 0; i <= 9; i++)
    {
    if (i != 2 && i != 4)
    {
    _putchar(i + '0');
    }
    }
    _putchar('\n');
}

