#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, spaces, hashes;

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		hashes = size - spaces;
		for (j = 0; j < spaces; j++)
			_putchar(' ');
		for (j = 0; j < hashes; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
