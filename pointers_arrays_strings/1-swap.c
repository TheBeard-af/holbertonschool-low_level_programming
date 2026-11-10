#include "main.h"

/**
 * swap_int - changes the value or ints
 * @a: first interger
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *b;
	*b = *a;
	*a = e;
}
