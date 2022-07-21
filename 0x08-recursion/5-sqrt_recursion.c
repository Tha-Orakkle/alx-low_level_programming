#include "main.h"

int _sqrt_recursion_func(int n, int i);
/**
 * _sqrt_recursion - returns the square root of a number.
 * @n: number to calculate the square root of.
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_func(n, 0));
}

/**
 * _sqrt_recursion_func - finds the square root
 * @n: number to calculate the square root of.
 * @i: random number to evaluate until the root is found.
 * Return: square root of n
 */

int _sqrt_recursion_func(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_func(n, i + 1));
}
