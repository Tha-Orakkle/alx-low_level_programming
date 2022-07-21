#include "main.h"

int is_prime_number_func(int n, int i);

/**
 * is_prime_number - checks whether a num is a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_func(n, 2));
}

/**
 * is_prime_number_func - checks whether the num is a prime number
 * @n: number to be checked
 * @i: integer
 *
 * Return: 1 if n is a prime numner and 0 if otherwise.
 */

int is_prime_number_func(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (is_prime_number_func(n, i + 1));
	}
	return (1);
}
