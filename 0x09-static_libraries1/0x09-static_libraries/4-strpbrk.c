#include "main.h"

/**
 * _strpbrk - search for the first occurence of any byte
 * from the substring in the s string and returns pointer
 * to the location of the first occurence
 * @s: string
 * @accept: substring
 * Return: returns a pointer to that byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/*loops through the first string */
	for (i = 0; *(s + i) != '\0';)
	{
		/* loops through the substring to find a match*/
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
