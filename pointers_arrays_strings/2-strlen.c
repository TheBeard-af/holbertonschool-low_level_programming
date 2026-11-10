#include "main.h"
/**
 * _strlen - string length
 * @s: string location
 * Return: the final count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
