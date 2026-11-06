#include "main.h"

/**
 * print_most_numbers - Prints digits except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		if (digit != 2 && digit != 4)
			_putchar(digit + '0');
		digit++;
	}
	_putchar('\n');
}
