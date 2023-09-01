#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * is_digit - check - string there are digit
 * @dig: array dig
 *
 * Return: Always 0 (Success)
 */
int is_digit(char *dig)
{
	unsigned int i;

	i = 0;
	while (i < strlen(dig))

	{
		if (!isdigit(dig[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;
	int str_to_int;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (is_digit(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
