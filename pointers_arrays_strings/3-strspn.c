#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of the substring
 * @s: initial segment
 * @accept: second segment
 *
 * Return: number of bytes in s which only consists of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;
	{
		while(s != '\0')
			if (s[i] == accept[i])
				count++;
		i++;
	}
	return(count
			}
