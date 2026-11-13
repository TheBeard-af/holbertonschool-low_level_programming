#include "main.h"
/**
 * cap_string - uppercaase starting words
 * @str: pointer
 * Return: pointer
 */
char *cap_string(char *str)
{
	char *start = str;
	int capitalize = 1;

	while (*str != '\0')
	{
		if (capitalize == 1 && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			capitalize = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n'
			 || *str == ',' || *str == ';' || *str == '.'
			 || *str == '!' || *str == '?' || *str == '"'
			 || *str == '(' || *str == ')' || *str == '{'
			 || *str == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		str++;
	}
	return (start);
}
