#include "main.h"

/**
 * reverse_array - reverse an array of integers.
 * @a: array to br reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
