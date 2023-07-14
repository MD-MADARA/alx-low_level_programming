#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the size to reserve.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);
	if (!res)
		exit(98);
	return (res);
}
