#include"main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenaates 2 strings
 * @dest - the destination of the file
 * @src - the source file of the string
 *
 * @n: the size of the src file
 */
char *_strncat(char *dest, char *src, int n)
{ 
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}

	while(j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
