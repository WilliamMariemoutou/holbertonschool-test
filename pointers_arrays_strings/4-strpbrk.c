#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates first occurence of any bytes
 * @s: the string
 * @accept: string to be compared to s
 *
 * Return: pointer to the byte in s that match to the bytes in accept of NULL
 * if not found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					return &s[i];
				}
				}
		}
	return NULL;
}



