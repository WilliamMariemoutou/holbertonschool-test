#include <stdio.h>
#include "main.h"
/**
 * _memset - to set the memory
 * @s: memory where the character is stored
 * @b: the constant byte
 * @n: memory area pointed by s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	{
		for(i = 0; i < n; i++)
			s[i] = b;
	}
	return s;
}

