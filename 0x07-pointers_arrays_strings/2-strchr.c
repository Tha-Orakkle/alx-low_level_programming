#include "main.h"

/**
 * _strchr - checks a string for the occurrence of a character
 * @s: string to be checked
 * @c: character to check for
 * Return: pointer to first occurence of the character
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}


