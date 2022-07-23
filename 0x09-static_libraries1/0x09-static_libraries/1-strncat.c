#include "main.h"

/**
 * _strncat - concatenates to two strings. Takes only n bytes of
 * data from the second string
 * @dest: designation string
 * @src: string to be coppied.
 * @n: number of byte to be copied
 * Return: result.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/*Finds the length of the dest string*/
	for (i = 0; dest[i] != '\0'; i++)
		;

	/*Copies n bytes of data from the src*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
