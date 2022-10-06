#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - creates a 2 dimensional array and initializes them
 * @width: element 1
 * @height: element 2
 * Return: pointer to the 2 dimensional array or Null
 */

int **alloc_grid(int width, int height)
{
int i, j, **arr;

if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = (int **) malloc(sizeof(int *) * height);

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
for (j = 0; j <= i; j++)
{
free(arr[j]);
}
return (NULL);
}
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

