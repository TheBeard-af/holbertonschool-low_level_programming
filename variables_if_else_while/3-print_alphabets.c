#include <stdio.h>

/**
 * main - print a to z
 * Return: 0
*/
int main(void)
{
	int n;
	int o;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n = n + 1;
	}
	o = 'A';
	while (o <= 'Z')
	{
		putchar(o);
		o = o + 1;
	}
	putchar('\n');
	return (0);
}
