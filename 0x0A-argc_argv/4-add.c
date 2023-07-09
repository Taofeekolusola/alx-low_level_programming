#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int a, sum = 0;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	{
		printf("argv[%d] = %s\n", a, argv[a]);
		sum += atoi(argv[a]);
	}
	printf("sum = %d\n", sum);
	}
	return (0);
}
