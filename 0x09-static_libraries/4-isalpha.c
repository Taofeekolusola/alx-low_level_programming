#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @C: the character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int C)
{
	        if ((C >= 65 && C <= 90) || (C >= 97 && C <= 122))
		{
			return (1);
						        }
		        return (0);
}
