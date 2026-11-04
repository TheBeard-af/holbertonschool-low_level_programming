#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
