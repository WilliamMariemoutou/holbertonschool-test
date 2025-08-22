#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest integer
 *@max: greatest integer
 *
 * Return: pointer to the newly created rray
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *arr;
	int i = 0;

	if (min > max)
		return NULL;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}


