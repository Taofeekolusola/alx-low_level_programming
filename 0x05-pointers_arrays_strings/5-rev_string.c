#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0, end = 0;
	char tmp;

	while (s[end++])
	start++;

	for (end = start - 1; end >= start / 2; end--)
	{
	tmp = s[end];
	s[end] = s[start - end - 1];
	s[start - end - 1] = tmp;
	}
}
