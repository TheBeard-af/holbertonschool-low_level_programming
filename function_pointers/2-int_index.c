#include "function_pointers.h"

/**
 * int_index - searches for an integer using a comparison function
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: comparison function
 *
 * Return: index of the first matching element, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);

		i++;
	}

	return (-1);
}
