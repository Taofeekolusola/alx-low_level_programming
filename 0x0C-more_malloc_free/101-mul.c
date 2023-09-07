#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_not_digit - checks if a string contains a non-digit char
 * @b: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_not_digit(char *b)
{
	int a = 0;

	while (b[a])
	{
		if (b[a] < '0' || b[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _stlen - returns the length of a string
 * @b: string to evaluate
 *
 * Return: the length of the string
 */
int _stlen(char *b)
{
	int a = 0;

	while (b[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * err - handles errors for main
 */
void err(void)
{
	printf("Error\n");
		exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int leng1, leng2, leng, x, car, dig1, dig2, *res, c = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_not_digit(a1) || !is_not_digit(a2))
		err();
	leng1 = _stlen(a1);
	leng2 = _stlen(a2);
	leng = leng1 + leng2 + 1;
	res = malloc(sizeof(int) * leng);
	if (!res)
		return (1);
	for (x = 0; x <= leng1 + leng2; x++)
		res[x] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		dig1 = a1[leng1] - '0';
		car = 0;
		for (leng2 = _stlen(a2) - 1; leng2 >= 0; leng2--)
		{
			dig2 = a2[leng2] - '0';
			car += res[leng1 + leng2 + 1] + (dig1 * dig2);
			res[leng1 + leng2 + 1] = car % 10;
			car /= 10;
		}
		if (car > 0)
			res[leng1 + leng2 + 1] += car;
	}
	for (x = 0; x < leng - 1; x++)
	{
		if (res[x])
			c = 1;
		if (c)
			_putchar(res[x] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
