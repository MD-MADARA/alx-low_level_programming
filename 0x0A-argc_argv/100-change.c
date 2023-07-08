#include "main.h"
#include <stdio.h>
/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @ac: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int ac, char **argv)
{
	int i, cents, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	cents = atoi(argv[1]);
	for (i = 0; coins[i]; i++)
	{

		while (cents && cents / coins[i])
		{
			result++;
			cents -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
