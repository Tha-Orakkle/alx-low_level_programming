#include <stdio.h>

/**
 * is_palindrome - checks if a number is a palindrome
 * @n: number
 *
 * Return: 1, otherwise 0
 */
int is_palindrome(int n)
{
	int new = 0, mul = 1, tmp = n, rem;

	while (tmp)
	{
		rem = tmp % 10;
		new = (new * mul) + rem;
		mul = 10;
		tmp /= 10;
	}
	if (new == n)
		return (1);
	return (0);
}

/**
 * main - finds the largest palindrome of the product of
 * two 3-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, max = 0, product, val;

	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 1000; j++)
		{
			product = i * j;
			val = is_palindrome(product);
			if (val == 1)
			{
				if (product > max)
					max = product;
			}
		}
	}
	printf("%d\n", max);

	return (0);
}
