#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - check if n is positive
 * Return: 0
 * check if n is negative
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n < 6 && n != 0)
{
printf("The last digit of %d is %d less than 6 and not 0\n", n, n % 10);
}
else
{
printf("The last digit of %d is 0 and is 0\n", n);
}
return (0);
}
