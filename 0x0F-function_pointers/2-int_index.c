#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of first element for which function cmp
 * does not return 0. return -1 if error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		/* loop through the array */
		for (i = 0; i < size; i++)
		{
			/**
			 * call-back function cmp and pass an array element as argument to check
			 * if it is an integer
			 */
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
