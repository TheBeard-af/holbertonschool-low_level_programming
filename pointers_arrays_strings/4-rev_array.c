#include "main.h"
/**
 * reverse_array - reverses an arry of strings
 * @a: string 1
 * @n: string 2
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
