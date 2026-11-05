#include "main.h"

/**
 * print_alphabet_x10 - print lower alphabet 10  times on 10 lines
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 'a';
	j = 0;
	while (j <= 9)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i = i + 1;
		}
		i = 'a';
		j = j + 1;
		_putchar('\n');
	}
}
