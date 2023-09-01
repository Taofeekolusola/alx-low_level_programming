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
	int i,  sum = 0;

	if (argc == 0)
	{
		printf("Zero\n");
	}
	if (argc != int)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("sum = %d\n", sum);
	}
	return (0);
}
