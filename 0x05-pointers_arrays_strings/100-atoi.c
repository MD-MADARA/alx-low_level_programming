#include "main.h"
/**
 * _atoi - convert a string to an integer
 *@s: String
 * Return: Return the num
 */
int _atoi(char *s)
{
	int i, num = 0, sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9') /* test if the character is number */
		{
			i = *s - '0'; /* convert char num to int num */
			num = i + num * 10;
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
		}
		s++;
	}

	return (num * sign);
}
