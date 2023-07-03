#include "main.h"
/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a :Pointer to an array
 * @size : size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int l_diag = 0;
	int r_diag = 0;

	for (i = 0; i < size; i++)
	{
		l_diag += a[i];
		r_diag += a[size - 1 - i]; /* a[size - 1] = last element index */
		a += size;
	}
	_putchar('0' + l_diag);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + r_diag);
	_putchar('\n');
}
