#include "main.h"
#include <stdlib.h>

/**
 * _strdup - makes array
 * @str: string
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	int count = 0;
	char *array;
	int index = 0;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	array = malloc((count + 1) * sizeof(char));

	while (str[index] != '\0')
	{
		array[index] = str[index];
		index++;
	}

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
