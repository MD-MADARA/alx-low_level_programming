#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds numbers
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
*
* Return: 0 if no errors, else 1
*/

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (j = 0 && argv[i][j] == '-')
				continue;
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
