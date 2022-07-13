#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	/*length of the string. */
	int i, j, len, half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	/* divides the length into halves. */

	half = (len / 2);

	/*prints the second half of the string. */

	for (j = half + 1; j <= len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
