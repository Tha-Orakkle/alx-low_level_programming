#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * and followed by a new line.
 * @a: array name
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	/**
	 * prints array element for index 0
	 * to index n.
	 */
	int i;

	for (i = 0; i < n; i++)
	{
		/* removes the comma and space from the last digit. */
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
