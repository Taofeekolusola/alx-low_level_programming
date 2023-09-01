#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Return zero
 */
int main(int argc, char *argv[])
{
	int c = 0, d = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		c = atoi(argv[1]);
		d = atoi(argv[2]);
		printf("product = %d\n", c * d);
	}
	return (0);
}
