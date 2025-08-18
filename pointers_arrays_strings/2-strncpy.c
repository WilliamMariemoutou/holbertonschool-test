#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination file where we hve to copy the string
 * @src: the source file of the string to be copied
 * @n: the length of the string.
 *
 * Return: the string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while(j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
	i++;
	j++;
	}

	return(dest);
}
