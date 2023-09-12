#include "search_algos.h"



/**
 * min - finds the smaller integer between two
 * @a: first integer
 * @b: secong integer
 *
 * Return: the smaller integer
 */

int min(int a, int b)
{
	return ((a < b) ? a : b);
}


/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}



/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}



/**
 * exponential_search - searches for a value in a sorted array of integers
 *			- using the Exponential Binary Search
 *
 * @array: pointer to the array
 * @size: length of the array
 * @value: value to search for in the array
 *
 * Return: index of the value otherwise 1
 */

int exponential_search(int *array, size_t size, int value)
{
	int i = 0, m, len, prev, idx;

	if (!array || size == 0)
		return (-1);
	if (array[i] == value)
		return (i);
	i = 1;

	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	m = min(i, size - 1);
	prev = i / 2;
	len = (m - prev) + 1;

	printf("Value found between indexes [%d] and [%d]\n", prev, m);

	idx = binary_search((array + prev), len, value);

	return (idx != -1 ? prev + idx : idx);
}
