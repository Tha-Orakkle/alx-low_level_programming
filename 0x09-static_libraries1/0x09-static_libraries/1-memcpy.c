#include "main.h"

/**
 * _memcpy - copys n byte of memory area from one string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: resulting dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

