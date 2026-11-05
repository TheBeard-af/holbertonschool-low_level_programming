#include <stdio.h>
2	
3	void print_table(int size)
4	{
5	    int row, col;
6	
7	    for (row = 1; row <= size; row++)
8	    {
9	        for (col = 1; col <= size; col++)
10	        {
11	            printf("%d ", row * col);
12	        }
13	        printf("\n");
14	    }
15	}
16	
17	/* -- DO NOT Modify the code below this line -- */
18	
19	int main(void)
20	{
21	    print_table(4);
22	    return 0;
23	}
