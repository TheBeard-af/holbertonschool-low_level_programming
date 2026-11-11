
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (sign == -1)
				result = result * 10 - (*s - '0');
			else
				result = result * 10 + (*s - '0');

			started = 1;
		}
		else if (started)
			break;

		s++;
	}

	return (result);
}
