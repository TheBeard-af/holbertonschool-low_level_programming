#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	while (count > 0)
	{
		_putchar(*s);
		count--;
		s--;
	}
	_putchar('\n');
}
