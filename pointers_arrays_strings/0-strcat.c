#include "main.h"
/**
 * _strcat - gives the characters in the line
 * @dest: destination
 * @src: source
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
