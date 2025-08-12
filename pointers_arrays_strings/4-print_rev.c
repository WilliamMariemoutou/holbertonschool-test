#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: points to the string
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	for (j = i-1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	  putchar('\n');
}
