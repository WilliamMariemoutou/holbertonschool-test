#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a chracter in a string
 * @s:  the string
 * @c: the character to be found
 *
 * Return: the pointer to the first character found or NULL if not found
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
		while(s[i] != '\0')
		{
			if (s[i] == c)
			return &s[i];
			i++;
		}
		return (NULL);
	}
