#include "main.h"

/**
 * leet - replaces letters a, A, e, E, o, O, t, T, l, L with
 * with number 4, 3, 0, 7, 1
 * @s: string
 * Return: resulting string.
 */

char *leet(char *s)
{
	int i, j;
	char *str1 = "aAeEoOtTlL";
	char *str2 = "4433007711";

	/* loops through the string to find letters */
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
			}
		}
	}
	return (s);
}
