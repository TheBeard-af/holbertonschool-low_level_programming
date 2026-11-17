#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - makes array
 * @width: width
 * @height: height
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **alloc_grid;
	int row = 0;
	int col = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return(NULL);
	}

	alloc_grid = malloc((width * height) * sizeof(int));

	while (row <= height)
	{
		while (col <= width)
		{
			printf("0");
			col++;
		}
		col = 0;
		row++;
	}
}
