#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long i = 1, tmp, a = 1, b = 2;
	unsigned long a1, a2, b1, b2;

	printf("%lu", a);
	while (i <= 90)
	{
		printf(", %lu", b);

		tmp = b;
		b = b + a;
		a = tmp;
		i++;
	}

	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (i = 91; i < 98; i++)
	{
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}


	printf("\n");

	return (0);
}
