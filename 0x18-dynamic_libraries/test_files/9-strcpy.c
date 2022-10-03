#include "main.h"

/**
 * _strcpy - copies the string from src to dest including the
 * null byte
 * @dest: pointer to destination of the string
 * @src: string to copy from
 *
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
