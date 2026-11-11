#include "main.h"
/**
 * _atoi - string length
 * @s: string location
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int digit;

	while (*s != '\0')
	{
		digit = *s - '0';
		result = result * 10 + digit;
		s++;
	}
	return (result);
}
