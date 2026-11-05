#include <stdio.h>
/**
 * print_table - prints a n x n number grid
 * @size: The upper limit of the sum
 *
 */
void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
}

/* -- DO NOT Modify the code below this line -- */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_table(4);
	return (0);
}
