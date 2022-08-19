#include "main.h"

/**
 * binary_to_unit - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: reuslt or 0 if b is NULL or the char is < 0 or > 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decnum = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decnum = 2 * decnum + (b[i] - '0');
		i++;
	}
	return (decnum);
}
