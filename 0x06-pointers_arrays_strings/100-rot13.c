#include "main.h"

/**
 * rot13 - encodes with the ceasar cypher. It replaces a
 * letter with the 13th letter after it.
 * @s: string
 * Return: resulting string
 */

char *rot13(char *s)
{
	int i, j;
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *str2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* checks through s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
	}

	return (s);
}
