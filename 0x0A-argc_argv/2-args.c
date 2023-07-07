#include "main.h"
/**
* main - Prints all arguments it receives
*
* @argc: Length of @argv, integer
*
* @argv: Array of strings of the arguments of this program
*
* Return: 0, success
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_string(argv[i]);
		_putchar('\n');
	}

	return (0);
}
