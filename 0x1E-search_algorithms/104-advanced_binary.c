#include "search_algos.h"


/**
 * find_first - finds first occurrence of a value in an array
 * @array: pointer to the array
 * @mid: size of the array
 * @value: value searched for
 *
 * Return: first occurrence of the value
 */

int find_first(int *array, size_t mid, int value)
{
	int idx = mid;

	printf("Searching in array");

	while (idx >= 0 && array[idx] && array[idx] == value)
	{
		printf("%s %d", (idx == (int)mid) ? ":" : ",", array[idx]);
		idx -= 1;
	}
	printf("\n");

	return (idx + 1);
}


/**
 * advanced_binary - searches for a value in a sorted array of integers
 *	- using advanced binary search algorithm. The index of the first
 *	- occurrence of the value will be returned
 * @array: pointer to the array
 * @size: length of the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of the value otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	if (mid && mid % 2 == 0)
		mid--;

	if (value == array[mid])
		return (find_first(array, mid, value));

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (value < array[mid])
		return (advanced_binary(array, mid, value));

	mid++;

	return (advanced_binary(array + mid, size - mid, value) + mid);
}
