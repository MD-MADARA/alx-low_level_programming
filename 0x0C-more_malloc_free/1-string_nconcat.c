#include "main.h"
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes to concatenate
 * Return: a pointer to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated
 * or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	i = 0;
	while (s1[i])
		i++;
	str = malloc(sizeof(char) * (n + i + 1));
	if (!str)
		return (NULL);
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (j = 0; s1[j]; j++)
		str[j] = s1[j];
	for (i = 0; i <= n && s2[i]; i++)
	{
		str[j] = s2[i];
		j++;
	}
	str[j] = '\0';
	return (str);
}
