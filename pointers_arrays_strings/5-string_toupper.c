#include "main.h"
/**
 * *string_toupper - lower to uppercaase
 * @str: pointer
 * Return: pointer
 */
char *string_toupper(char *str)
{
	char *start = str;

	while (*str != '\0')
	{
	if (*str >= 'a' && *str <= 'z')
	*str = *str - 32;
	str++;
	}
	return (start);
}
