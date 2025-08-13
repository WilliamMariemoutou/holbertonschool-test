#include "main.h"
#include <stdio.h>
#include <string.h>

/**_strcat - concatenates 2 strings
 * @dest: pointer to the destination file
 * @src: pointer to the source file
 *
 * Return: string in dest
 */


char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}


	while(src[j] != '\0')
	{
		src[j] = dest[i];
		i++;
		j++;
	}
	dest[i] = '\0';

		return (dest);
}



