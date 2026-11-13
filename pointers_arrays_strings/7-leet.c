#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: pointer
 */
char *leet(char *str)
{
	char *start = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;

	while (*str != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (*str == letters[i])
			{
				*str = numbers[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (start);
}
