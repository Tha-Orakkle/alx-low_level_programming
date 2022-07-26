#include "main.h"

char *_strcat(char *str1, char *str2);
int length(char *s);

/**
 * str_concat - creates a new allocated space in the memory for
 * a concatenated string
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL or pointer to new allocate memory
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}

	new_str = (char *) malloc(sizeof(char) * (length(s1) + length(s2)) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	else
	{

		_strcat(new_str, s1);
		_strcat(new_str, s2);
	}

	return (new_str);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * length - finds the length of a string
 * @s: string passed
 *
 * Return: length
 */
int length(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
