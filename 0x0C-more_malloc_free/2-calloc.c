#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: sizeof each element
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		res[i] = 0;
	return (res);
}
