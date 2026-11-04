#include <stdio.h>

/**
 * main - prints the single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
