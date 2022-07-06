#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer to be tested
 * Return: 1 and prints + if greater than zero,
 * return and print 0 if n is zero and
 * return -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
