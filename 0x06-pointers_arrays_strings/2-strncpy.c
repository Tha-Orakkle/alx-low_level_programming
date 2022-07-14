#include "main.h"

/**
 * _strncpy - copies a string into another.
 * @dest: destination string
 * @src: source string
 * @n: n byte(s) of string to be copied from src
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copies src into dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
