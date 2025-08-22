#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: contents of s1 followed by s2 and return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	char *concat;
	int i;

	if(s1)
		for (len_1 = 0; s1[len_1] != '\0'; len_1++)
			;

	else
		len_1 = 0;

	if (s2)
		for (len_2 = 0; s2[len_2] != '\0'; len_2++)
			;
	else
		len_2 = 0;

	concat = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (concat == NULL)
		return NULL;

	for (i = 0; i < len_1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len_2; i++)
		concat[len_1 + i] = s2[i];

	concat[len_1 + len_2] = '\0';
	return concat;
}
