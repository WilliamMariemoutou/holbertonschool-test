#include "main.h"
#include <stdio.h>

/**
 * swap_int - need to swap two values
 * @a: first value
 * @b: second value
 *
 */

void swap_int(int *a, int *b)
{
	int temp = 0;
	
		temp = *a;
		*a = *b;
		*b = temp;
	}


