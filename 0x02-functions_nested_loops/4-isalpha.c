#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is the letter to check for
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= '122') || (c >= '65' && c <= '90'));
}
