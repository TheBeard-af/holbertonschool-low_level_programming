#include "main.h"

/**
 * print_line - Draws a horizontal line
 * @n: Number of underscores
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
