#include "main.h"
#include <stdio.h>
/**
 * print_array - string length
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *a);
		a++;
		count++;
		if (count < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
