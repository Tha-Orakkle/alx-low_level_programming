#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: byte size of s2 to be joined with s1
 *
 * Return: pointer to the new memory location of result
 * or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	if (n < len2)
	{
		for (j = 0; j < n; j++)
			str[i++] = s2[j];
	}
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
			str[i++] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
