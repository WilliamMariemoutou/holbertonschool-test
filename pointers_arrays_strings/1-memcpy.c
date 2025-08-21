#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy memory
 * @dest: memory area where data will be copied
 * @src: source file where data will be copied into dest
 * @n: number of data to be copied
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
