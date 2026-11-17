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

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	array = malloc((count + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		array[index] = str[index];
		index++;
	}

	return (array);
}
