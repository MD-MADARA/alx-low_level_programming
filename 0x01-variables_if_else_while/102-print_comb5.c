#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num1, num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = 0;
		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(' ');
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
