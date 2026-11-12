#include "main.h"
/**
 * _strncpy - copipes string
 * @dest: destination
 * @src: source
 * @n: string length
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	while (count < n)
	{
		*dest = '\0';
		dest++;
		count++;
	}
	return (start);
}
