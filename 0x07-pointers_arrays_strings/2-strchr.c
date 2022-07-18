#include "main.h"
#include <stddef.h>

/**
 * _strchr - checks a string for the occurrence of a character
 * @s: string to check
 * @c: character to check for
 * Return: pointer to first occurence of the character
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}


