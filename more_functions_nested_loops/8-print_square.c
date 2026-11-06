#include "main.h"

/**
 * print_square - Prints a square of hash characters
 * @size: Length of each side
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int column;

	row = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
