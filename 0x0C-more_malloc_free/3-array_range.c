#include "main.h"

/**
 * array_range - allocates and arranges an array from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array or NULL if
 * error is encountered
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
