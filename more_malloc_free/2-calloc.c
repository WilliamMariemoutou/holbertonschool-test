#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array to be allocated to memory
 * @size: size of nmemb
 *
 * Return: pointer to the allocated memory or NULL if malloc fails
 */ 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if(nmemb == 0 || size == 0)
		return NULL;

	arr = malloc(nmemb * size);
		if (arr == NULL)
			return NULL;

	for (i = 0; i < (nmemb * size); i++)
		((char *)arr)[i] = 0;

	return (arr);
}


