#include "main.h"
#include <stdio.h>
/**
 * main - prints its own name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 *
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("This program prints its own name\n");
	printf("name = %s\n", argv[0]);
	return (0);
}

