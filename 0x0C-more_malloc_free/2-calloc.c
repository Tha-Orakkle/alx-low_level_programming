#include "main.h"

/**
 * _calloc - allocates memory to an array of elements
 * initialized to 0;
 * @nmemb: number of elements in the array
 * @size: byte size of the array
 *
 * Return: NULL if memory allocation fails, otherwise
 * return pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
