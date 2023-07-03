#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the string containing the set of
 * characters to be searched for.
 * Return: the length of the initial segment of the first string
 * that consists entirely of characters from the second string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, ctr = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == ' ')
				return (ctr);
			if (s[i] == accept[j])
				ctr++;
		}
	}
	return (ctr);
}
