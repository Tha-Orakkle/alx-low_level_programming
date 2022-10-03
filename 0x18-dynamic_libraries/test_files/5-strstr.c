#include "main.h"
#include <stdio.h>

/**
 * _strstr - find the first occurence of the substring needle
 * in a string haystack
 * @haystack: string
 * @needle: substring to check for
 *
 * Return: returns pointer to beginning of the location of the
 * substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
