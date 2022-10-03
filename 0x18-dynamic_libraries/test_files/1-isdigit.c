#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: integer to check
 *
 * Return: 1 if it is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
