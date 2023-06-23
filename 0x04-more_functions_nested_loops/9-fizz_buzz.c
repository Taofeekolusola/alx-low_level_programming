#include "main.h"
#include "stdio.h"

/**
 * main - prints a fizzbuzz program
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
	if ((x == % 3)||(x == % 5))
	{
	printf("FizzBuzz");
	}
	else if (x == % 3)
	{
	printf("Fizz");
	}
	else if (x == % 5)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ")
	}
	}
	printf('\n');
}
