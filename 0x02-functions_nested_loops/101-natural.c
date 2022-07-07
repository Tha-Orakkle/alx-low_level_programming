#include <stdio.h>
/**
 * main - computes and prints all th emultiples of
 * 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum3, sum5;
	int i;

	sum3 = 0;
	sum5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	printf("%d\n", (sum3 + sum5));
	return (0);
}
