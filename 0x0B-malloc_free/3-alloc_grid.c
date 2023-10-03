#include "main.h"
/**
 * alloc_grid - name
 * @width: int from main
 * @height: int from main
 *
 *  returns a pointer to a 2 dimensional
 *  array of integers
 *  Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(height * 4);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * 4);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
