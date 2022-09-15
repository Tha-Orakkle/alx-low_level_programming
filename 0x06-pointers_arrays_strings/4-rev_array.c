#include "main.h"

/**
 * reverse_array - reverse an array of integers.
 * @a: array to br reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
