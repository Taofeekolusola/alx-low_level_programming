#include <stdio.h>
#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H
#endif
/**
 * main - prints the name of the file it was compiled from
 * Return: zero
 */
int main(void)
{
	printf("Name of source file: %s\n", __FILE__);
	return (0);
}

