#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_strdup: returns the pointer to a new string which was duplicated.
 *@str: the string
 *
 *Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int len = 0;
	char *dup;
	int i = 0;

	
		if (str == NULL)
			return NULL;

			for(; str[len] != '\0'; len++)
				;

			dup = malloc(sizeof(char) * (len + 1));
					
					if(dup == NULL)
					return NULL;

					for (i = 0; i < len; i++)
						dup[i] = str[i];

					dup[len] = '\0';
					return dup;

}
				


