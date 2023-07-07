#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	        int a, n;

		for (a = 0; s[a] != '\0'; a++)
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[a] == accept[n])
					return (s + a);
			}
		}					        }

		    return (NULL);
}
