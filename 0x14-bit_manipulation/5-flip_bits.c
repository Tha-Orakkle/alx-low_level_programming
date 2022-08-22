#include "main.h"

/**
 * flip_bits - function that returns the number of  bits you
 * need to flip to get from a number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be shifted
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		m >>= 1;
		n >>= 1;
	}

	return (count);
}
