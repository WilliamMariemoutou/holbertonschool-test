#include "main.h"
#include <stdio.h>

/**_strlen - returns the length of the string
 *@s: the string
 *
 */

int _strlen(char *s)
{
	int i = 0;

		while (*s != '\0')
		{
			s++;
			i++;
		}

		return(i);
}

