#include "main.h"
#include <stdlib.h>
int read_letters(char *str);
char **strtow(char *str);

/**
 * read_letters - locates the index marking the end of the
 * first word contained withing a string.
 * @s: the string to be searched.
 * Return: the index marking the end of the initial word pointed to by str.
 */
int read_letters(char *s)
{
	int f, a, b;

	f = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			b++;
		}
	}
	return (b);
}
/**
 *strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, c = 0, l = 0, read, b = 0, start, end;

	while (*(str + l))
		l++;
	read = read_letters(str);
	if (read == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (read + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (b)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[c] = tmp - b;
				c++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = a;
	}

	matrix[c] = NULL;
	return (matrix);
}
