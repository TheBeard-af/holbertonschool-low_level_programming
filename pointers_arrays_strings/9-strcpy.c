#include "main.h"
/**
 * _strcpy - copy string
 * @dest: string destination
 * @src: String origin
 * Return: points to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original);
}
