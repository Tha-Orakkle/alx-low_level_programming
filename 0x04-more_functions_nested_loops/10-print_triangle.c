#include "main.h"

/**
 * print_triangle - prints a triangle with '#'
 * @size: size of triangle, that is,
 * number of times '#' will be printed
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <=  i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

