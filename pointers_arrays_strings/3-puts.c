#include "main.h"
/**
 * _puts - gives the characters in the line
 * @str: string location
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
