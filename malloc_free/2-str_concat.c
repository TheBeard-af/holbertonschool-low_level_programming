#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concates strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int count = 0;
	int counts1 = 0;
	int counts2 = 0;
	int countt = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[counts1] != '\0')
	{
		counts1++;
	}
	while (s2[counts2] != '\0')
	{
		counts2++;
	}

	arr = malloc((counts1 + counts2 + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	while (count < (counts1))
	{
		arr[count] = s1[count];
		count++;
	}

	while (count <= (counts1 + counts2))
	{
		arr[count] = s2[countt];
		count++;
		countt++;
	}
	return (arr);
}
