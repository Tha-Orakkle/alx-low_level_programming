#include "main.h"

/**
 * swap_int - checks two integers and swaps them.
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
