#include "main.h"

/**
 * _strdup - returns the pointer to a newly allocated memory
 * @str: string passed
 * Return: NULL if str is 0 and if insufficient memory is available.
 */

char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	/* finds the length of the string passed */

	for (len = 0; str[len] != '\0'; len++)
		;

	/* allocates new memory space for a string*/
	new_str = (char *) malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	/* Create a copy of the string in the new space*/
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
