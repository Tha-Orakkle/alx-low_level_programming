#include "main.h"
/**
 * print_number - prints a number using _putchar
 * @n: number
 * Returns: result
 */
void print_number(int n)
{
	int n1;

	if (n < 0 )
	{
		n1 = -n;
		_putchar('-');
	}
	else
		n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
