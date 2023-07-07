#include "main.h"

/**
 * _isdigit - checks number zero to nine
 * @x: the number to be checked
 * Return: 1 if c is a digit 0 if not
 */

int _isdigit(int x)
{
	        if (x >= 48 && x <= 57)
		{
			return (1);
		}
		        return (0);
}
