#include <stdio.h>

/**
 * main - print a to z
 * Return: 0
*/
int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
