#include "main.h"
/**
 * _sqrt - a function that helps to get the square root
 * @n: the number
 * @i: natural square roots
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);

	if ((i * i) == n)
		return (i);

	return (_sqrt(n, i + 1));
}
/**
  * _sqrt_recursion - a function that returns
  * the natural square root of a number
  * @n: the number to calculate the sqaure root of
  * Return: the resulting square root
  * or -1 if n does not have a natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
