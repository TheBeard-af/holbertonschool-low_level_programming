#include "main.h"
#include <stdio.h>

int main(void)
{
        printf("%d\n", _atoi("123"));
        printf("%d\n", _atoi("-123"));
        printf("%d\n", _atoi("--123"));
        printf("%d\n", _atoi("98 Battery Street"));
        printf("%d\n", _atoi("-2147483648"));
	printf("%d\n", _atoi("abc-123"));
        return (0);
}
