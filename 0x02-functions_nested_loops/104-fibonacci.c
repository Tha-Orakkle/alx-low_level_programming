#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long i = 0, tmp, a = 1, b = 2;

	printf("%lu", a);
	while (i < 98)
	{
		printf(", %lu", b);

		tmp = b;
		b = b + a;
		a = tmp;
		i++;
	}
	printf("\n");

	return (0);
}
