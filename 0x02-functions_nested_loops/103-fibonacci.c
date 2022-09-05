#include <stdio.h>

/**
 * main - prints the sum of even-valued fibonacci terms
 * below 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int tmp, sum = 0, a = 0, b = 1;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		tmp = b;
		b  = b + a;
		a = tmp;
	}
	printf("%lu\n", sum);

	return (0);
}
