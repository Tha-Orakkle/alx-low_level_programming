#include "function_pointers.h"

/**
 * array_iterator - executes a function passed as an argument
 * on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	/* if null argument is passed */
	if (array == NULL || action == NULL)
		return;

	/* loop through element of array*/
	for (i = 0; i < size; i++)
	{
		/* call-back function pointer*/
		action(array[i]);
	}
}
