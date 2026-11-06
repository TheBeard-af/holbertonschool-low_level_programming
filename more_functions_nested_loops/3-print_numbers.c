#include "main.h"

/**
 * print_numbers - Prints digits from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		_putchar(digit + '0');
		digit++;
	}
	_putchar('\n');
}
