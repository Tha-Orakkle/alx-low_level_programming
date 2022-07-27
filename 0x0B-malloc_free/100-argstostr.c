#include "main.h"
/**
 * argstostr - concatenates the arguments of the program
 * @ac: number of arguments passed
 * @av: argument string
 *
 * Return: NULLif error is encountered, otherwise to a new pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	k = 0;
	len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}

