#include "main.h"

/**
 * print_chessboard -  a function that prints the chessboard
 * @a: pointer to string
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	for (i = 0; i < 8; i++)
	{
		_putchar("%s", a[i]);
		_putchar('\n');
	}
}
