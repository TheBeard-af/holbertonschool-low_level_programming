#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints integers from n to 98
 * @n: starting integer
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	printf("%d", n);

	while (n != 98)
	{
		if (n < 98)
			n++;
		else
			n--;

		printf(", %d", n);
	}

	printf("\n");
}
