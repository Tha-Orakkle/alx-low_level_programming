#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
 * _memset - fills a memory with b
 * @s: array to fill
 * @b: char to fill the memory with
 * @n: number of times to copy b
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory to an array of elements
 * the memory is set to 0;
 * @nmemb: number of elements in the array
 * @size: byte size of the array
 *
 * Return: NULL if memory allocation fails, otherwise
 * return pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb);
	return (ptr);
}
