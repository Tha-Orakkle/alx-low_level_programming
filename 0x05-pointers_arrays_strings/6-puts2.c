#include "main.h"

/**
 * puts2 - prints every other character
 * of a string.
 * @str: string
 */

void puts2(char *str)
{
	int i, j, len;

	/* calclulates the length of the string. */
	for (i = 0; str[i] != '\0'; i++)
		;
	len = i - 1;

	/* prints every other character of the string. */
	for (j = 0; j <= len; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
