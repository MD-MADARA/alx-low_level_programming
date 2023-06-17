#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int hexa = 0;

	while (hexa <= 9)
		putchar('0' + hexa++);
	hexa = 0;
	while (hexa < 6)
		putchar('a' + hexa++);

	putchar('\n');
	return (0);
}
