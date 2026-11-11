#include "main.h"
/**
 * puts_half - print every other string
 * @str: string
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	char *start = str;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	i = length / 2;
	str = start + i;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
