#include <stdio.h>

/**
 * main - prints the largest prime factor of
 * a composite number
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, num, large_fac;

	i = 2;
	num = 612852475143;
	large_fac = 0;

	while (num != 1)
	{
		if (num % i == 0)
		{
			if (large_fac < i)
				large_fac = i;
			num /= i;
			i = 2;
		}
		else
			i++;
	}
	printf("%ld\n", large_fac);

	return (0);
}
