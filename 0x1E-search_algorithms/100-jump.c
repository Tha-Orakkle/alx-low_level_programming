#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 *		using the jump seaech algorithm
 * @array: pointer to the array
 * @size: length of the array
 * @value: value to search for
 *
 * Return: returns the index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, idx, step = sqrt(size);

	if (!array || size == 0)
		return (-1);
	for (idx = 0; idx < size; idx += step)
	{
		if (array[idx] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n",
				idx, array[idx]);
	}
	prev = idx - step;
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, idx);
	for (; prev <= idx; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n",
				prev, array[prev]);
		if (idx > size)
			break;
		if (array[prev] == value)
			return ((int)prev);
	}

	return (-1);
}
