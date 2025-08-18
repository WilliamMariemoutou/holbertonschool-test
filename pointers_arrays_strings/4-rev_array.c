#include <stdio.h>
#include "main.c"

/**
 * reverse_array - reverses the content of an array
 * @a: array to be reversed
 * @n: numbers of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int end = n - 1;
	int temp;

	while (i <= end)
		{
			temp = a[i];
			a[i] = a[end];
		   a[end] = temp;
		}
}	

