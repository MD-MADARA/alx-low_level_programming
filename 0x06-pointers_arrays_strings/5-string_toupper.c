#include "main.h"

/**
  * string_toupper -  a function that changes all lowercas
  * letters of a string to uppercase.
  * @ptr: a pointer to the string.
  * Return: the string in uppercase.
  */
char *string_toupper(char *ptr)
{
	char *p = ptr;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		*p -= 32;

		p++;
	}
	return (ptr);
}
