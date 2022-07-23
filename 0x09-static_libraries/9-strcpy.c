#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string into a destinated variable
 * @dest:  destination char argument of characters
 * @src: source char argument of characters
 * Return: A string of characters upon success
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
