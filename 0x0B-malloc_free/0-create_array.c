#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	*(str + i) = '\0';
	return (str);
}
