#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle
 * @size: Height and base width
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int spaces;
	int hashes;

	row = 0;
	while (row < size)
	{
		spaces = size - row - 1;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		hashes = 0;
		while (hashes <= row)
		{
			_putchar('#');
			hashes++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
