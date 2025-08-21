#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurence of the substring
 * @haystack: the null-terminated string
 * @needle: to be found within haystack
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return &haystack[i];
	}
	return NULL;
}
