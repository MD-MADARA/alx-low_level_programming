#include "main.h"
/**
 * dividors - search for dividors of n except n and 1
 * @n: the number
 * @i: iterator for devidors
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int dividors(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (dividors(n, i + 1));
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	dividors(n, 2);
}
