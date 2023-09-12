#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *			- using the interpolation search algorithm
 * @array: pointer to the array
 * @size: length of the array
 * @value: value to search for
 *
 * Return: the index of the value otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0;
	size_t pos;

	if (!array)
		return (-1);

	while (size)
	{

		if (low == high)
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] -
				array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
					pos);
			return (-1);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);

}
