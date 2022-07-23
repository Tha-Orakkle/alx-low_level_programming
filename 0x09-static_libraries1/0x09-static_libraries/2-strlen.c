#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: is the string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
