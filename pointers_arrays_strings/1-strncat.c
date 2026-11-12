#include "main.h"
/**
 * _strncat - gives the characters in the line
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (start);
}
