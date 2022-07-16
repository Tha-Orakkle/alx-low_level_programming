#include "main.h"
/**
 * print_number - prints a number using _putchar
 * @n: number
 * Returns: result
 */
void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar(((n % 100) % 10) + '0');
	}

}
