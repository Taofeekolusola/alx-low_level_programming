#include "main.h"
int is_palin(char *c, int a, int lent);
int _lent_recursion(char *c);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (is_palin(s, 0, _lent_recursion(s)));
}

/**
 * _lent_recursion - returns the length of a string
 * @c: string to calculate the length of
 *
 * Return: length of the string
 */
int _lent_recursion(char *c)
{
	if (*c == '\0')
		return (0);
	return (1 + _lent_recursion(c + 1));
}

/**
 * is_palin - checks the characters of palindrome recursively
 * @c: string to check
 * @a: iterator
 * @lent: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palin(char *c, int a, int lent)
{
	if (*(c + a) != *(c + lent - 1))
		return (0);

	if (a >= lent)
		return (1);

	return (is_palin(c, a + 1, lent - 1));
}
