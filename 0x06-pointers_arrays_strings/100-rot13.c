#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: a pointer to the string
 * Return: the string coded in rot13
 */
char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if ((*p >= 'a' && *p < 'n') || (*p >= 'A' && *p < 'N'))
		{
			*p += 13;
			p++;
		}
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			*p -= 13;
			p++;
		}
		else
			p++;
	}
	return (s);
}
