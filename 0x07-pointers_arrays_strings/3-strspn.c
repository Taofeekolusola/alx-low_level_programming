#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, val, check;

	val = 0;

	for (a = 0; s[a] != '\0'; b++)
	{
		check = 0;
		
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				val++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (s[a]);
	}
	return 0;
}
