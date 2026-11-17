#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - makes array
 * @size: size of array
 * @c: the char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (count <= size)
	{
		arr[count] = (c);
		count++;
	}
	return (arr);
}
