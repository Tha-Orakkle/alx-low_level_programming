#include "main.h"

/**
 * print_number - prints integer using _putcher
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(n);
	}
	else if (n > 0 && n < 10)
	{
		_putchar(n);
	}
	else if (n > 10 && n < 100)
	{
		_putchar((n / 10) + 0);
		_putchar((n % 10) + 0);
	}
}
