#include "main.h"

/**
 * print_diagonal - draws a diagonal line with '\'
 * @n: number of times '\' should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			for (j = 1; j <= n; i++)
			{
				_putchar('b');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
