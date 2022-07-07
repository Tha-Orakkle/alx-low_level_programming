#include <stdio.h>
/**
 * main - prints the first 50 terms of the
 * fibonacci sequence starting from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j <= 12586269025)
		{
			printf("%d, ", j);
		}

		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
