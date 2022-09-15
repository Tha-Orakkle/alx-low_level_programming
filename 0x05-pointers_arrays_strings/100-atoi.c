#include "main.h"

/**
 * main - converts string to an integer
 * @s: pointer to string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0, len, n = 0, digit, sign = 0, flag = 0;

	for (len = 0; s[len]; len++)
		;

	while (i < len && flag == 0)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			n = n * 10 + digit;
			if (sign % 2)
				n = -n;
			flag = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		flag = 0;
		i++;
	}
	if (flag == 0)
		return (0);

	return (n);
}
