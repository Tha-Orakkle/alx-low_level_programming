#include "main.h"

/**
 * _strstr - find the first occurence of the substring needle
 * in a string haystack
 * @haystack: string
 * @needle: substring to check for
 * Return: returns pointer to beginning of the location of the
 * substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	/*loops through the string*/
	for (i = 0; haystack[i] != '\0';)
	{
		if (haystack[i] == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (haystack);
}
