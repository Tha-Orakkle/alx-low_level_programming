#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string to be joined with the first.
 * Return: joined string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/**
	 * get the index of the last character
	 * of the first string which is the '\0'
	 */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/**
	 * appends the next string with the first
	 * starting from  the '\0'
	 */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
