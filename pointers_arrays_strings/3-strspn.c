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
	unsigned int j = 0;
	int found;

		while(s[i] != '\0')
		{
			found = 0;

			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					{found = 1;
						break;
					}
			}
			if (!found)
				break;

			count++;
			i++;
		}
		return count;
}
