#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, len, temp;

	/* calculates the length of the string.*/
	for (i = 0; s[i] != '\0'; i++)
		;
	len = i - 1;

	/* reverses the string.*/
	for (j = 0; j <= i / 2; j++)
	{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
		len--;
	}
}
