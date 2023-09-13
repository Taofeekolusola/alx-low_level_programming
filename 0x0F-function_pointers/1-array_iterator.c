#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: numbers to print
 * @action: pointe to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
