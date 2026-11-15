#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = 1;
	double a;
	double b;

	printf("Welcome to my calculator\n");
	printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
	while (choice != 0)
	{
		printf("Choice: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			printf("Result: %f\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			printf("Result: %f\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			printf("Result: %f\n", a * b);
		}
		else if (choice == 4)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			if (b != 0)
			{
				printf("Result: %f\n", a / b);
			}
			else
			{
				printf("Error: division by zero\n");
			}
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
		else
		{
			printf("Invalid choice\n");
		}
	}
	return (0);
}
