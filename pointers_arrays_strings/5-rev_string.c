#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *@s: pointer to the string
 *
 */

void rev_string(char *s)
{
	 int start = 0;
	 int end = strlen(s) - 1;
	 char temp = 0;

	while (start < end)
	{
		temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
	}
}
