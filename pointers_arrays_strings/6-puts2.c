#include "main.h"
/**
 * puts2 - print every other string
 * @str: string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str++;
		str++;
	}
	_putchar('\n');
}
